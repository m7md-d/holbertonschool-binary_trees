#include "binary_trees.h"

/**
 * _binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t sum = 0, left = 0, right = 0;
	if (!tree)
		return (0);

	left = _binary_tree_height(tree->left);
	right = _binary_tree_height(tree->right);

	sum++;
	if (left > right)
		sum += left;
	else
		sum += right;
	return (sum);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = _binary_tree_height(tree->left);
	right = _binary_tree_height(tree->right);
	return (left - right);
}
