#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: first node
 * @second: second node
 * 
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second)
{
    int first_depth, second_depth;

    if (!first || !second)
        return (NULL);

    first_depth = binary_tree_depth(first);
    second_depth = binary_tree_depth(second);

    for (; first_depth > second_depth; first = first->parent, first_depth--)
        ;
    for (; first_depth < second_depth; second = second->parent, second_depth--)
        ;
    for (; first && second; first = first->parent, second = second->parent)
    {
        if (first == second)
            break;
    }
    return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - Measures the depth of a binary tree
 *
 * @tree: tree
 * Return: depth of the tree or NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);

	for (; tree->parent; tree = tree->parent, depth++)
		;
	return (depth);
}