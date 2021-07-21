#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * 
 * balanceFactor=height(leftSubTree)−height(rightSubTree)
 * 
 * @tree: binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    int height_left, height_right;

    if (!tree)
        return 0;

    height_left = tree->left ? (int)binary_tree_height(tree->left) : -1;
    height_right = tree->right ? (int)binary_tree_height(tree->right) : -1;

    return (height_left - height_right);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * 
 * @tree: tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_l;
	size_t height_r;

	if (!tree)
    	return 0;

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}