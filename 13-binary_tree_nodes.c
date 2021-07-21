#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the node with at least 1 child in a binary tree
 * 
 * @tree: binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (!tree || (!tree->left && !tree->right))
        return 0;

    return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - Measures the depth of a binary tree
 * 
 * @tree: tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (!tree)
        return 0;
        
    return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
 * binary_tree_leaves - Count the leaves in a binary tree
 * 
 * @tree: binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    if (!tree->left && !tree->right)
        return 1;
    else
        return (binary_tree_leaves(tree->left) +
                binary_tree_leaves(tree->right));
}
