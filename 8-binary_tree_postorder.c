#include "binary_trees.h"

/**
 * binary_tree_postorder - traveses a binaru tree tree using post order
 * @tree: pointer to root node of tree
 * @func: function to call each node on
 * Return: nothing
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
