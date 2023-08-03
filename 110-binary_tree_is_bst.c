#include "binary_trees.h"

int check_if_is_bst(const binary_tree_t *tree, int lowest, int largest);
/**
 * binary_tree_is_bst - Checks if a binary tree is BST.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (check_if_is_bst(tree, INT_MIN, INT_MAX));
}

/**
 * check_if_is_bst - Checks if binary tree is BST
 *
 * @tree: pointer to root node of the tree
 * @lowest: value of the smallest node visited thus far.
 * @largest: value of node with highest visited this far.
 *
 * Return: 1 if tree is BST 0 otherwise
 */
int check_if_is_bst(const binary_tree_t *tree, int lowest, int largest)
{
	if (tree != NULL)
	{
		if (tree->n < lowest || tree->n > largest)
			return (0);
		return (check_if_is_bst(tree->left, lowest, tree->n - 1) &&
			check_if_is_bst(tree->right, tree->n + 1, largest));
	}

	return (1);
}
