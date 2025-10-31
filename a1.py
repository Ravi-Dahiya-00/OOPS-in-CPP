from collections import deque

# Define the graph
graph = {
    "A": ["B","C"],
    "B": ["D","E"],
    "C": ["F","G"],
    "D": [],
    "E": ["H"],
    "F": ["H"],
    "G": [],
    "H": []
}

def BFS(start, goal):
    # Queue stores paths, not just nodes (initially path = [start])
    queue = deque([[start]])
    
    # Visited set to track explored nodes
    visited = set()
    
    while queue:
        # Take the first path from the queue
        path = queue.popleft()
        
        # Get the last node from this path
        node = path[-1]
        
        # If already visited, skip
        if node in visited:
            continue
        visited.add(node)
        
        # ✅ If goal found, return the path
        if node == goal:
            return path
        
        # Otherwise, explore all neighbors
        for neighbour in graph[node]:
            new_path = path + [neighbour]   # extend path with neighbor
            queue.append(new_path)
    
    return None   # if no path found

path = BFS("A", "G")
print(path)
