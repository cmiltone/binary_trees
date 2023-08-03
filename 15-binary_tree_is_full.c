#include "binary_trees.h"

int check_if_full(const binary_tree_t *tree);

/**
 * binary_tree_is_full - returns 1 if a binary tree is full or 0 otherwise
 * @tree: pointer to root
 * Return: 1 or 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check_if_full(tree));
}

/**
 * check_if_full - Checks if a binary tree is full.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is not NULL, otherwise 1.
 */
int check_if_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if ((tree->left != NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right != NULL) ||
			check_if_full(tree->left) == 0 ||
			check_if_full(tree->right) == 0)
		return (0);

	return (1);
}