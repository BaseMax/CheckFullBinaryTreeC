# Check Full Binary Tree in C

This is a simple program to check if a binary tree is full or not.

# Tree

A tree is a data structure in which each node has at most two children. The topmost node is called the root node. The nodes that do not have any children are called leaf nodes.

## Binary Tree

A binary tree is a tree in which each node has at most two children. The two children of a node are called the left child and the right child.

## Full Binary Tree

A full binary tree is defined as a binary tree in which all nodes have either zero or two child nodes. Conversely, there is no node in a full binary tree, which has one child node.

# Examples

1. If the tree is empty, then it is a full binary tree.
2. If the tree has only one node, then it is a full binary tree.
3. If the tree has two nodes, then it is a full binary tree.
4. If the tree has more than two nodes, then it is a full binary tree if the left subtree is a full binary tree and the right subtree is a full binary tree.

# Algorithm

I think the best algorithm to check if a binary tree is full or not is to count the number of nodes. If the tree is full, then the number of nodes is 2^h - 1, where h is the height of the tree. If the number of nodes is 2^h - 1, then the tree is full.

We can also use recursion to check if a binary tree is full or not. But that is not the best algorithm.

## Using

```bash
$ gcc full_bin_tree.c -o full_bin_tree
$ full_bin_tree
```

Copyright (c) 2022, Max Base
