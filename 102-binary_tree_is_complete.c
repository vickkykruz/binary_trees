#include "binary_trees.h"
/**
 * binary_tree_sized - This is a function that return the measured size of a
 * binary tree
 * @tree: This is an argument that reprsen the pointer to the root node
 *
 * Return: This function return the size of the tree otherwise 0 as NULL
 */
size_t binary_tree_sized(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_sized(tree->left) + binary_tree_sized(tree->right)
			+ 1);
/**
 * is_tree_complete - This is a function that check if the tree is complete
 * @tree: This is an argument that reprsent the pointer to the root node
 * @idx: This is an argument that reprsent the index of the node
 * @counter: This is an argument that reprsent the number of nodes
 *
 * Return: This function retun 1 if complete tree otherwise 0
 */
int is_tree_complete(const binary_tree_t *tree, int idx, int counter)
{
	if (tree == NULL)
		return (1);
	if (idx >= counter)
		return (0);

	return (is_tree_complete(tree->left, (2 * idx) + 1, counter) &&
		is_tree_complete(tree->right, (2 * idx) + 2,
		counter));
}
/**
 * binary_tree_is_complete - This is an function that check if a binary tree
 * is completed
 * @tree: This is an argument that reprsent the pointer to the root node of
 * the tree to check
 *
 * Return: This funcation return the status true (1) otherwise false (0)
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t counter;

	if (tree == NULL)
		return (0);

	counter = binary_tree_sized(tree);

	return (is_tree_complete(tree, 0, counter));
}
