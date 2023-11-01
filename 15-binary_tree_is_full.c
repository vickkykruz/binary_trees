#include "binary_trees.h"
/**
 * num_nodes - This is a function that return the number of nodes in a
 * binary tree
 * @tree: This is an argument that reprsent the pointer to the root node.
 *
 * Return: This function return the number of nodes in the binary tree
 */
int num_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + num_nodes(tree->left) + num_nodes(tree->right));
}
/**
 * binary_tree_is_full - This is a function that checks if a binary tree is
 * full
 * @tree: This is an argument that reprsent the pointer to the root node of
 * the tree to check
 *
 * Return: The function return an integer
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (num_nodes(tree) % 2);
}
