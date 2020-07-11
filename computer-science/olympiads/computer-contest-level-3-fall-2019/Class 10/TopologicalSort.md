# Olympiads Class 10 notes - Topological Sort

Another way to search the graph

- Sort the verticies in a directed graph

Try to get a sequence of vertices in an acyclic graph.

If a path goes from v to k, must have v first then k.

**The answer is not always unique.**

(but if you order by the vertex name/id) it is unique

Figures out dependency.

If there is a cycle, it is not possible to include all the vertices.

Topological sort can be used to find a cycle, you can see if a vertex is missing, if it is then there is a disconnected vertex or cycle.

## How to do topological sorting?

```text
1. Start from a vertex that has no incoming edge (indegree 0).
2. Remove the vertex (Don't really remove it, since this is a directed graph, and the current vertex has an indegree of 0, the current vertex will not be visited again), and any edges connected to the vertex.
2. Add to a list
4. Repeat.
```

If there is a cycle, in some cases there will be no edge with indegree of 0.

## Implementation

Maintain a list of indegrees.

When reading the input, just add the indegrees when connecting edges.

### You can use a stack or queue

```text
Push all the vertices with 0 indegrees into the structure.
poll/pop the first vertex.
reduce all the vertices' indegree the cur is connected to by 1.
When removing, check if any indegrees become 0 when reducing, if it is 0, push the vertex into the structure.
```

Finding all cycles with topological sort:

remove all non-cycle vertices, the remaining are cycles.