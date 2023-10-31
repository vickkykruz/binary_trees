#include "binary_trees.h"
/**
 * binary_tree_size - This is a function that  measures the size of a binary
 * tree
 * @tree: This is an argument that reprsent the pointer to the root node of
 * the tree to measure the size
 *
 * Return: This function return the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) +
			binary_tree_size(tree->right));
}
