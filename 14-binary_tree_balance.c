#include "binary_trees.h"

/**
 * binary_tree_balance - Checks balance of binary tree
 * @tree: ptr to tree
 * Return: balance of binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}

	return (0);
}

/**
 * binary_tree_height - Measures height of binary tree
 * @tree: ptr to root node of tree to measure height
 * Return: If tree NULL function must return 0, else return height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lhs = 0, rhs = 0;

		lhs = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rhs = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lhs > rhs) ? lhs : rhs);
	}

	return (0);
}
