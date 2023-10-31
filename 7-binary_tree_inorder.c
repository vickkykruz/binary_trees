#include "binary_trees.h"
/**
 * binary_tree_inorder - This is a function that goes through a binary tree
 * using in-order traversal
 * @tree: This is an argrument that represnt the pointer to the root node of
 * the tree to traverse
 * @func: This is an argument that represnt a pointer to a fuction to call for
 * each node
 *
 * Return: This function return a void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
