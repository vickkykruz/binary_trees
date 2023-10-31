#include "binary_trees.h"
/**
 * binary_tree_delete - This is a function that deletes an entire binary tree
 * @tree: This is an argument that reprsent the pointer to the root node of
 * the tree to delete
 *
 * Return: This function return a void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
