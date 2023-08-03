#include "binary_trees.h"

/**
 * binary_tree_sibling - returns node's sibling
 * @node: node to find sibling of
 * Return: the sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);

	return (node->parent->right);
}
