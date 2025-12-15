#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 *
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t sum;

	if (!tree)
		return (0);
	for (sum = 0; tree->parent; sum++)
		tree = tree->parent;
	return (sum);
}
