#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf of binary tree
 * @node: ptr to node to check
 * Return: if node is a leaf - 1 otherwise - 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
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

/**
 * binary_tree_is_perfect - checks if binary tree perfect
 * @tree: ptr to root node of tree
 * Return: 1 perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *lhs, *rhs;

	if (tree == NULL)
	{
		return (0);
	}

	lhs = tree->left;
	rhs = tree->right;

	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}

	if (lhs == NULL || rhs == NULL)
	{
		return (0);
	}

	if (binary_tree_height(lhs) == binary_tree_height(rhs))
	{
		if (binary_tree_is_perfect(lhs) && binary_tree_is_perfect(rhs))
		{
			return (1);
		}
	}

	return (0);
}
