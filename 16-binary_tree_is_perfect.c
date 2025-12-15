#include "binary_trees.h"
#include <stdio.h>

/**
 * depth - Measures the depth of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the depth
 *
 * Return: Depth of the tree
 */
int depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 * @depth: Depth of the tree
 * @level: Current level of the tree
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
		return (1);
	if (!tree->left && !tree->right)
		return (depth == level + 1);
	if (!tree->left || !tree->right)
		return (0);
	return (is_perfect(tree->left, depth, level + 1) &&
		is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_perfect(tree, depth(tree), 0));
}
