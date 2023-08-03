#include "binary_trees.h"

/**
 * binary_tree_height - determines tree heihgt
 * @tree: pointer to root node of binary tree
 * Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rh = 0;
	size_t lh = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lh = binary_tree_height(tree->left) + 1;
	else
		lh = 0;

	if (tree->right)
	 rh = binary_tree_height(tree->right) + 1;
	else
		rh = 0;

	if (lh > rh)
		return (lh);
	else
		return (rh);
}
