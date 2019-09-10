# Rimuru's Problems - Trees

You are to draw a tree (undirected). You can use up to 50 nodes and 49 edges. You must meet the following conditions:

- Each node must be given a number from to , where you use a total of nodes
- Each edges must create a valid connection
- Each node will be given a value that is non-negative.
- A node will be defined as a "root node" if the value of the node is (this does not count towards the "special
value" of the node) Furthermore, this means that the root node will not have a specified value.
- The "special value" of a node will be the sum of all the values of the nodes in its subtrees and the value of itself.

Create a tree, such that the maximum "special value" in the tree is equal to **W**.

## Constraints

## Input Specification

You will be given a single integer, **W**.

## Output Specification

On the first line of input, you will output the number of nodes you have, , and beside it, the number of edges,.

For each edge on a new line, output a node and a node separated by a space, indicating a connection between the
two nodes.

On the last line of output, output space-separated values, indicating the "values" of node.

## Solution

For this question, we don't *really* need to create a tree.

Since the question limits the maximum number of nodes and edges, but does **NOT** specify a minimum, we can just output 2 nodes: The *root* node with no value, connected to another node with the value **W**.

Our output looks like this:

``` none
2 1
1 2
-1 (W)
```

> Replace (W) with the value of **W**.

### Solution in Java

``` java
import java.util.Scanner;

public class RimurusProblems {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("2 1\n" +
                "1 2\n" +
                "-1 "+s.nextInt());
    }
}
```
