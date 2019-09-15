# Introduction to Graphs

## Seven Bridges of Königsberg

![Seven Bridges of Königsberg](https://upload.wikimedia.org/wikipedia/commons/5/5d/Konigsberg_bridges.png)

> The problem of the Seven Bridges of Königsberg.

We *cannot* cross every bridge only once.

In graph theory, an **Eulerian Trail** is a trail in a graph which visits every edge exactly once.

*Similarly*, an **Eulerian circuit** or **Eulerian
cycle** is a Eulerian trail which *starts* and *ends*
on the **same** vertex.

## Graphs

#### What is a Graph

A graph is composed of **vertices** and **edges**.

Some graphs have *weight*, while others don't.

There may be more than one edge connected to a vertex.

### Types of Graphs

There are 2 main types of graphs: **Directed**, and **Undirected**.

- Undirected graphs have edges that allow you to travel on an edge in any direction.
- A directed (digraph) graph will only allow you to travel in a certain direction on an edge.

### Terminology

#### Adjacent Vertices

When 2 vertices are connected, they are adjacent.

##### In a Directed Graph

In a directed graph, if **v**<sub>1</sub> is connected to **v**<sub>2</sub>, we say that **v**<sub>1</sub> is adjacent to **v**<sub>2</sub>. This does **not** mean that **v**<sub>2</sub> is connected to **v**<sub>1</sub>

#### Degree of a Vertex

The degree of a vertex is the number of edges
incident to that vertex.

##### For Directed Graphs

- The **in-degree** of a vertex v is the number of edges
that are connected **to** v.
- The **out-degree** of a vertex v is the number of edges
that are coming **from** v.

#### Path

A path is a sequence of vertices such that consecutive vertices are adjacent. We allow paths to have cycles.

##### Simple Paths

A simple path contains no repeated vertices

##### Cycles

A cycle is a simple path, but the last vertex is the same as the first

#### Complete Graphs

A complete graph is a graph in which every pair of distinct vertices is connected by an edge.

A complete graph has `n(n-1)/2` edges.

#### Other Terminology

An undirected graph is **connected** if there is a path from every vertex to every other vertex. **This does not mean it is a complete graph**

A directed graph with this property is called **strongly connected**.

A subgraph is a subset of vertices forming a graph.

Connected components are subgraphs that are connected

### Trees

A tree is a connected graph, that contains no cycles.

In a tree, the number of **edges** is the number of **vertices - 1**.

If the number of edges is **less** then the number of vertices - 1, the graph is **not connected**.

### Storing a graph

#### Adjacency Matrix

|k|1|2|3|4|5|
|-|-|-|-|-|-|
|1|0|1|0|1|0|
|2|1|0|0|0|1|
|3|0|0|0|1|0|
|4|1|0|1|0|0|
|5|0|1|0|0|0|

In this undirected adjacency matrix *k*, we can see that:

1 is connected to 2,
1 is connected to 4,
1 is connected to 5,


n = 5

e = n(n-1)/2

storing graphs,

Adjacent Matrix

Adjacent List

Adj matrix



Undirected graph has a symmetrical adjacency matrix

Degree = sum of non 0's in a row in the adjacency matrix

to check if v is connected to k, just check if adjacency[v][k] is not 0

Indegree = sum of non 0's in a column in adjacency matrix

adjacency matrix takes v^2 memory

We can use an Adj list

Vertex 1: [] <-- List

Vertex 2: [] <-- List

Vertex 3: [] <-- List

Vertex 4: [] <-- List

to connect 4 with 1, just add 4 to 1, and 1 to 4

to get the degree from an adj list, just get the length
