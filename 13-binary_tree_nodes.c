#include "binary_trees.h"

/**
 * binary_tree_nodes - Gets number of nodes child of BinTree
 * @tree: ptr to tree
 * Return: no. of nodes (0 if empty)
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right_count = 0, left_count = 0;

	if (!tree)
	{
		return (0);
	}

	right_count = binary_tree_nodes(tree->right);
	left_count = binary_tree_nodes(tree->left);

	if (tree->right != NULL || tree->left != NULL)
	{
		return (right_count + left_count + 1);
	}

	return (right_count + left_count);

}
