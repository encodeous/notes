# 

## Trees

### The center of the tree

 A node in the tree, and from it, generates the shortest path from the node to every other node. (Minimizing the height) A tree can have at most 2 centers, and the center is always on the diameter path.

### Finding the center

 On an non weighted tree, the center of the tree is the middle of the diameter path. (If it is even, there will be 2 centers)

For weighted graph: Go through the graph (INCOMPLETE)

Radius of a tree: The maximal height from the center of the graph.

### Finding maximal distance from any node

First find the 2 points of the diameter, run bfs from those 2 points, keep an array of distances.

v1 `1 2 3 4 5 6`

v2 `6 5 4 3 2 1`

The maximal distance is the max of the 2 arrays at the index of the node.

Finding the Diameter: Start from any node, and find the distance to that node. One of the diameter points is the largest distance.

(1) Starting from any node, to visit every node in the tree, and back you will visit 2*e edges.

(2) Start from a specific node, visit every node once, and no need to return back to the start position, you will visit 2*e - (the longest distance from the start node).

(3) Start from any node visit every node once, and no need to return back, the minimum travel cost is 2*e - diameter.
