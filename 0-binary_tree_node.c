#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: ponter to parent node
 * @value: value to put in the node
 * Return: ponter to new node or NULL
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->right = NULL;
	node->left = NULL;

	node->parent = parent;

	return (node);
}
