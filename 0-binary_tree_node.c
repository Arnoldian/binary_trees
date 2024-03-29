#include "binary_trees.h"

/**
 * binary_tree_node - create binary tree node
 * @parent: parent node ptr
 * @value: Int stored in node
 * Return: Ptr to new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (0);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node);
}
