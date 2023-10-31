#include "binary_trees.h"
/**
 * binary_tree_leaves - This is a function that counts the leaves in a binary
 * tree
 * @tree: This is an argument that reprsent the pointer to the root node of
 * the tree to count the number of leaves
 *
 * Return: This function that return the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int counter;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		counter = 1;
	else
		counter = 0;

	return (counter + binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
