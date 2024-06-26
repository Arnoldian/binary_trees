#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right-child of another node
 * @parent: ptr to node to insert right-child
 * @value: to store in new node
 * Return: ptr to created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;

	if (parent->right != NULL)
		(parent->right)->parent = new_node;
	{
		new_node->right = parent->right;
		parent->right = new_node;
	}

	return (new_node);
}
