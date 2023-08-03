#include "binary_trees.h"

/**
 * binary_tree_leaves - calculates number of leaves in a tree
 * @tree: ponter ot root node
 * Return: the number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree == NULL)
		return (0);
	
	if (tree->left == NULL && tree->right == NULL)
		l += 1;
	l += binary_tree_leaves(tree->left);
	l += binary_tree_leaves(tree->right);

	return (l);
}
