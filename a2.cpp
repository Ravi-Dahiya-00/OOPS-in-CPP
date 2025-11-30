#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int x) {
    Node* newnode = new Node;
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}
Node *deletesecond(Node* head){
    Node* del=head->next;
    head->next=head->next->next;
    delete del;
    return head;
}

int main() {
    int n;
    cin >> n;

    Node* head = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* newnode = createNode(x);

        if (head == NULL) {
            head = newnode;
        }  
        else {
            Node* temp = head;
            while (temp->next != NULL) {   // traverse to end
                temp = temp->next;
            }
            temp->next = newnode;          // insert at end
        }
    }

    head=deletesecond(head);
    // print list
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
