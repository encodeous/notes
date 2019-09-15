# Olympiads School Computer Contest level 3 - Class 3

## Graph Search / Traversal

- DFS
- - When you have a path, search it until you reach the end
- BFS
- - Start on every single path at once, advance one each time
- Topological Sorting

When you visit a vertex, you shouldn't visit it again to prevent an infinite loop.

### BFS and DFS

#### BFS

1. Start from a vertex, mark it as visited, depth 0 (or 1 more than the depth of the previous vertex, if this is the first vertex, the previous depth is -1).
2. Find all the unvisited neighbours of the vertex, mark them visited and level 1 (or 1 more than the depth of the previous vertex).
3. For each of the neighbours, repeat the steps until no more vertices can be visited.

The minimum length of a vertex to another vertex, is the minimum depth between each one.

```java
BFS Implementation in JAVA.
// Non-Recursive BFS implementation
    public static int[] BFS(int n, int src, int[][] matrix){
        boolean[] visited = new boolean[n];
        int[] dist = new int[n];
        Queue<Integer> visitQueue = new ArrayDeque<>();
        visitQueue.add(src);
        while(!visitQueue.isEmpty()){
            int cur = visitQueue.poll();
            for(int v = 0; v< n; v++){
                if(!visited[v]){
                    visitQueue.add(v);
                    visited[cur] = true;
                    dist[v] = dist[cur]+1;
                }
            }
        }
        return dist; // returns the depth
    }
```
