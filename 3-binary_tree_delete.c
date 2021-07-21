#include "binary_trees.h"

/**
 * binary_tree_insert_delete - Deletes an entire binary tree
 * 
 * @tree: tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
    if (!tree)
        return (NULL);

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    
    free(tree);
}