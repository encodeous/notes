# Computer Contest Level 3 Class 5

## Graphs 2

### Depth First Search

- Depth-first search uses the same idea as backtracking.
  - Exhaustively searching all possibilities by advancing if possible.
  - Backing up as soon as there is no more unexplored vertices.

The path a node is visited by is not always the shortest.

We can implement dfs with recursion, eliminating any explicit stacks.

DFS can generate a tree called the `DFS (Non-Minimum) Spanning Tree`

DFS can detect cycles:

- For an undirected graph:
  - When you discover new nodes, and a next node (Meaning not the previous parent node), is visited, it is considered a cycle.
- For a directed graph:
  - When discovering nodes, a node is a cycle when the node is visited, and the current visit stack contains the node.
  - We can have 3 states for the visited array:
    - when the state = 0: not visited
    - when the state = 1: visited, in stack
    - when the sate = 2: visited, not in stack
  - when we backtrack, we set the visited nodes to 2.

