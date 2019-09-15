# Vera and Trail Building

For this question, we want to create a set of connected sub-graphs, where the sum of the number of each graph's *beautifully connected* pairs is equal to *k*.

To find the number of *beautifully connected* pairs, given **N** the number of vertices. We can use the formula: `P = n(n-1)/2`, where P is the number of pairs.

Example:

When *k* is equal to **5**, we need to construct a graph with **5** *beautifully connected* pairs.

The closest integer *n* we can achieve is 3. So we first construct a graph with 3 vertices.

Sub-graph 1

```none
1 2
2 3
3 1
```

Now we have to create 2 more *beautifully connected* pairs.

To do this, we must create 2 graphs, each with 2 vertices, connected bidirectionally.

Sub-graph 2

```none
4 5
5 4
```

Sub-graph 3

```none
6 7
7 6
```

Now, we need to link all of these graphs together

```none
// Sub-graph 1
1 2
2 3
3 1
// Linking Graph 1 with 2
3 4
// Sub-graph 2
4 5
5 4
// Linking Graph 2 with 3
5 6
// Sub-graph 2
6 7
7 6
```

Example 2:

When *k* is equal to **6**, we need to construct a graph with **6** *beautifully connected* pairs.

In this case, **n** is *exactly* 4. So we construct a single graph with 4 vertices.

```none
1 2
2 3
3 4
4 1
```

Since we already have all of our *beautifully connected* pairs, we do not need to generate any more graphs.

## Here is a nice little table to reference

|N Value|Beautifully Connected Pairs|
|---|---|
|1|0|
|2|1|
|3|3|
|4|6|
|5|10|
|6|15|
|7|21|
|8|28|
|9|36|
|10|45|
|11|55|
|12|66|
|13|78|
|14|91|
|15|104|

To generate more of n, I created a simple function in java.

```java
int BeautifullyConnectedPairs(int vertices){
    return vertices*(vertices-1)/2;
}
```

We can generate a lookup table for each value of n.
