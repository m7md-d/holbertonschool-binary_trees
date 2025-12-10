# C - Binary Trees

This project is an implementation of Binary Trees data structures in C. It covers the logic behind memory allocation for nodes, linking parents and children, tree traversal methods, and analyzing tree properties.

## Data Structure

The project uses the following structure for the binary tree nodes:

    struct binary_tree_s
    {
        int n;
        struct binary_tree_s *parent;
        struct binary_tree_s *left;
        struct binary_tree_s *right;
    };

    typedef struct binary_tree_s binary_tree_t;
    typedef struct binary_tree_s bst_t;
    typedef struct binary_tree_s avl_t;
    typedef struct binary_tree_s heap_t;

## Requirements

- OS: Ubuntu 20.04 LTS
- Compiler: gcc
- Flags: -Wall -Werror -Wextra -pedantic -std=gnu89
- Style: Betty Style

## Compilation

All files are compiled using the following command:

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_tree

## Features

- Node Management: Creation and safe memory handling.
- Insertion: Inserting nodes as left or right children.
- Traversal: Methods to navigate through the tree.
- Measurements: Calculating size, height, depth, and balance factor.
