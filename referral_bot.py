import json
from referral_bot import Update
from telegram.ext import ApplicationBuilder, CommandHandler, ContextTypes
from telegram.error import BadRequest

TOKEN = "8577387821:AAHebGS1Hw1U4Q_3BnKQ1eOdFKeK8G_ZB7g"
DATA_FILE = "referrals.json"

# Load referral data
def load_data():
    try:
        with open(DATA_FILE, "r") as f:
            return json.load(f)
    except:
        return {}

# Save referral data
def save_data(data):
    with open(DATA_FILE, "w") as f:
        json.dump(data, f, indent=4)

# /start command to generate referral link
async def start(update: Update, context: ContextTypes.DEFAULT_TYPE):
    user = update.effective_user
    user_id = str(user.id)

    data = load_data()
    if user_id not in data:
        data[user_id] = {"count": 0}
        save_data(data)

    # Create unique referral link for each user
    referral_link = f"https://t.me/{context.bot.username}?start={user_id}"

    await update.message.reply_text(
        f"👋 Hello {user.first_name}!\n"
        f"Here is your referral link:\n"
        f"{referral_link}\n\n"
        f"Share this link – anyone who joins using it will be counted under you!"
    )

# Event when someone starts bot using a referral link
async def track_referral(update: Update, context: ContextTypes.DEFAULT_TYPE):
    user = update.effective_user
    user_id = str(user.id)

    if context.args:
        referrer_id = context.args[0]

        if referrer_id != user_id:  # prevent self-referral
            data = load_data()
            if referrer_id in data:
                data[referrer_id]["count"] += 1
                save_data(data)
                await context.bot.send_message(
                    chat_id=referrer_id,
                    text=f"🎉 A new member joined using your link!\n"
                         f"Total referrals: {data[referrer_id]['count']}"
                )

    await update.message.reply_text("You joined the bot successfully!")

# /leaderboard command
async def leaderboard(update: Update, context: ContextTypes.DEFAULT_TYPE):
    data = load_data()

    if not data:
        await update.message.reply_text("😕 No referral data yet.")
        return

    sorted_users = sorted(data.items(), key=lambda x: x[1]["count"], reverse=True)

    msg = "🏆 **Referral Leaderboard** 🏆\n\n"
    rank = 1
    for user_id, info in sorted_users:
        try:
            chat = await context.bot.get_chat(int(user_id))
            name = chat.first_name
        except BadRequest:
            name = "Unknown User"
        
        msg += f"{rank}. {name} — {info['count']} referrals\n"
        rank += 1

    await update.message.reply_text(msg)

def main():
    app = ApplicationBuilder().token(TOKEN).build()

    app.add_handler(CommandHandler("start", track_referral))
    app.add_handler(CommandHandler("leaderboard", leaderboard))

    print("Bot is running...")
    app.run_polling()

if __name__ == "__main__":
    main()
