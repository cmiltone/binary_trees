#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to root node
 * Return: count
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		n += 1;
		n += binary_tree_nodes(tree->left);
		n += binary_tree_nodes(tree->right);
	}

	return (n);
}
