#include "binary_trees.h"
/**
 * binary_tree_nodes - This is a function that counts the nodes with at least 1
 * child in a binary tree
 * @tree: This is an argument that reprsent the pointer to the root node of
 * the tree to count the number of node
 *
 * Return: This function returns the number of node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int counter;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		counter = 1;
		size_t binary_tree_nodes(const binary_tree_t *tree);
	}
	else
		counter = 0;

	return (counter + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}
