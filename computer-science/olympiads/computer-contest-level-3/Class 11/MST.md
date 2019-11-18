# Olympiads class MST Notes

A Tree is a graph that is fully connected

## Spanning Trees

A spanning tree is a tree that connects all the vertices in a graph without any cycles.

A spanning tree is NOT unique.

## Minimum Spanning Tree

Get a spanning tree with the minimum total cost.

When a graph is connected, it always has a minimum spanning tree.

### Algorithms

There are 2 simple algorithms, both are greedy

* Prim's
* Kruskal

#### Prim's Minimum Spanning Tree Algorithm

1. Pick a random seed for the root node.
2. Add one more node each time

Find an edge that has 1 vertex belongs to the tree, and one that does not belong to the tree.

Pick the one minimum edge for every vertex inside the active tree.

Expand the tree.

Repeat.

