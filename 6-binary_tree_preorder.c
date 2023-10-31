#include "binary_trees.h"
/**
 * binary_tree_preorder - This is a function that goes through a binary tree
 * using pre-order traversal
 * @tree: This is an argument that reprsent the pointer to the root node of
 * the tree to traverse
 * @func: This is an argument that reprsent the function to call for each node
 *
 * Return: This function return a void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
