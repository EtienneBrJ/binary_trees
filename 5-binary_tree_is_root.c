#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is a root
 * 
 * @node: check if node is a root
 * Return: 1 if node is root otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
    if (!node)
        return 0;

    if (!node->parent)
        return 1;

    return 0;
}