# Program: Traversal of BFS and DFS
# a) Structures of Data- **Adjacency Matrix (`graph[V][V]`)** - → Holds vertices' connections  
- **Array (`visited[V]`)** → Monitors nodes visited  
**Queue (array)** - Applied to BFS  

---
 ## b) Purpose and Functions

1. `BFS(int start)` → Uses a queue to traverse the graph level by level.

2. `DFSUtil(int v, int visited[])` is a recursive helper function for DFS.

3. `DFS(int start)` → Uses recursion to traverse the graph depth-wise.

---

 ## c) main()
- Begins calling BFS from vertex 0.  
- Starts at vertex 0 and calls DFS  

---
 ## d) Sample Results

DFS: 0 1 3 2 4; BFS: 0 1 2 3 4