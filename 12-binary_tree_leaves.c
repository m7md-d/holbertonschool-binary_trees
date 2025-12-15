#include "binary_trees.h"

/**
 * _binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise
 */
int _binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: Number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sum = 0;

	if (!tree)
		return (0);
	sum += binary_tree_leaves(tree->left);
	sum += binary_tree_leaves(tree->right);

	return (sum + _binary_tree_is_leaf(tree));
}
