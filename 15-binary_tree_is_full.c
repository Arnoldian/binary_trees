#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: ptr to root node of tree
 * Return: 1 true or 0 false
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
