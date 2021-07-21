#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree
 * 
 * @tree: tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    int depth = 0;

    if (!tree)
        return 0;
        
    for (; tree->parent; tree = tree->parent, depth++);
    return (depth);
}
