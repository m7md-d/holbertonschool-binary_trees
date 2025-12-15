#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least 1 child in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t sum = 0;

	if (!tree)
		return (0);
	sum += binary_tree_nodes(tree->left);
	sum += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (sum + 1);
	return (0);
}
