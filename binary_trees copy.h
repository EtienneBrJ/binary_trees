#ifndef B_TREES_H
#define B_TREES_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Print function */
void binary_tree_print(const binary_tree_t *tree);

/* Create a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Insert a node as the left-child of another node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Insert a node as the left-child of another node */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Deletes an entiere binqry tree */
void binary_tree_delete(binary_tree_t *tree);

/* Checks if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Check if a node is a root */
int binary_tree_is_root(const binary_tree_t *node);

/* Goes through a binary tree using pre-order traversal*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* Goes through a binary tree using in-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Goes through a binary tree using post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Measures the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree);

/* Measures the depth of a binary tree */
size_t binary_tree_depth(const binary_tree_t *tree);

/* Measures the size of a binary tree */
size_t binary_tree_size(const binary_tree_t *tree);

/* Count the leaves in a binary tree */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* Counts the node with at least 1 child in a binary tree */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* Measures the balance factor of a binary tree */
int binary_tree_balance(const binary_tree_t *tree);

/* Checks if a binary tree is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* Check if a binatry tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);
int is_perfect(const binary_tree_t *tree, int depth, int level);

/* Finds the sibling of a node */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* Finds the uncle of a node */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);



/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

#endif