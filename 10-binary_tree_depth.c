#include "binary_trees.h"

/**
 * binary_tree_depth - extracts depth of  node in bin-tree
 * @tree: ptr to tree
 * Return: depth of node (0 if empty)
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}

	return (binary_tree_depth(tree->parent) + 1);
}
