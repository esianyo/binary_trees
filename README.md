# Binary Trees in C

This repository contains the implementation of binary trees in the C programming language. Binary trees are fundamental data structures used in computer science and are essential for various applications and algorithms. This project focuses on understanding binary trees, their types, and common operations.

## Table of Contents

- [Introduction](#introduction)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Data Structures](#data-structures)
- [How to Use](#how-to-use)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project delves into binary trees in C and explores their structure, different types, and associated operations. Binary trees are versatile data structures with many practical uses in software development and algorithm design.

## Learning Objectives

By the end of this project, you will have a deep understanding of the following topics, enabling you to explain them without the need for external resources:

- What is a binary tree?
- The difference between a binary tree and a Binary Search Tree (BST).
- The time complexity advantages of binary trees over linked lists.
- Understanding the depth, height, and size of a binary tree.
- Various traversal methods to navigate a binary tree.
- Recognizing complete, full, perfect, and balanced binary trees.

## Requirements

- Editors: Allowed editors include vi, vim, and emacs.
- Compilation: All code will be compiled on Ubuntu 20.04 LTS using gcc with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89.
- Line Endings: Ensure that all code files end with a new line.
- README.md: A README.md file must be present at the root of the project folder.
- Coding Style: Your code should adhere to the Betty style, and it will be validated using betty-style.pl and betty-doc.pl.
- Global Variables: You are not allowed to use global variables.
- Function Limit: Each file should contain no more than 5 functions.
- Standard Library: You can use standard library functions.
- Prototypes: Include function prototypes in the header file named binary_trees.h.
- Header Files: Ensure that your header files are include guarded.

## Data Structures

To implement binary trees, you will use the following data structures:

- `binary_tree_s` for basic binary trees.
- `bst_t` for Binary Search Trees.
- `avl_t` for AVL Trees.
- `heap_t` for Max Binary Heaps.

## How to Use

You can clone this repository to explore the provided code examples, learn about binary trees, and use the implementations in your projects and experiments.

## Contributing

We welcome contributions! If you have improvements or additional content related to binary trees in C, please feel free to submit a pull request.

## License

This repository is available under the [MIT License](LICENSE).

## Authors

- [Ms. Constance Amakie Amatey](https://github.com/amakie) -> Email: consamate57@gmail.com
- [Mr. Esianyo Dzisenu](https://github.com/esianyo) -> Email: esianicd@gmail.com

## Synopsis

This project provides an in-depth exploration of binary trees and their implementation in C. It includes a range of functions for creating, manipulating, and analyzing binary trees. These functions can be used as a foundation for various applications in computer science and software development.

## Function Descriptions

Here is a brief description of the primary functions available in this repository:

- `binary_tree_node`: Creates a node for the Binary Tree.
- `binary_tree_insert_left`: Inserts a node as the left-child of another node.
- `binary_tree_insert_right`: Inserts a node as the right-child of another node.
- `binary_tree_delete`: Deletes a Binary tree using post-order traversal.
- `binary_tree_is_leaf`: Checks if a node is a leaf or not.
- `binary_tree_is_root`: Checks if the node is the root node.
- `binary_tree_preorder`: Prints the values of a binary tree in pre-order.
- `binary_tree_inorder`: Prints the values of a binary tree in-order.
- `binary_tree_postorder`: Prints the values of a binary tree post-order.
- `binary_tree_height`: Returns the height of the tree.
- `binary_tree_size`: Calculates the size of a binary tree.
- `binary_tree_leaves`: Counts the leaves in a binary tree.
- `binary_tree_nodes`: Counts the nodes in a binary tree.
- `binary_tree_balance`: Measures the balance factor of a binary tree.
- `binary_tree_is_full`: Checks if a binary tree is full.
- `binary_tree_is_perfect`: Checks if a tree is perfect.
- `binary_tree_sibling`: Returns the sibling of a node.
- `binary_tree_uncle`: Returns the uncle of a node.
- `binary_trees_ancestor`: Finds the lowest common ancestor of two nodes.
- `binary_tree_depth`: Measures the depth of a node in a binary tree.
- `binary_tree_levelorder`: Prints a tree in a level by level order.
- `binary_tree_is_complete`: Checks if the binary tree is complete looking at each level and checking that after a non-full node is found the next nodes are a leaf.
- `binary_tree_rotate_left`: Rotates a tree to the left.
- `binary_tree_rotate_right`: Rotates a tree to the right.
- `array_to_bst`: Builds a Binary Search Tree from an array.
- `bst_search`: Searches for a value in a Binary Search Tree.
- `bst_remove`: Removes a node from a binary tree.