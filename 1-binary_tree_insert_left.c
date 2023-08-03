#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts new node as left child of a node
 * @parent: the node to insert left chold to
 * @value: data for new node
 * Return: pointer to the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);

	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;

	return (node);
}
