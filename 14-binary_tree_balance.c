#include "binary_trees.h"
/**
 * search_max - This is a function that return the max between two numbwr
 * @a: This is an argument that reprsent the first number
 * @b: This is an argument that reprsent the second number
 *
 * Return: This function return the max number
 */
int search_max(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}
/**
 * search_height - This is a function that return the height of a tree
 * @tree: This is an agrument that represent the pointer to the root node of
 * binary tree
 *
 * Return: This function the height otherwise 0
 */
size_t search_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = search_max(search_height(tree->left), search_height(tree->right));

	return (height + 1);
}
/**
 * binary_tree_balance - This is a function that measures the balance factor
 * of a binary tree
 * @tree: This is an argument that reprsent the root node of the tree to
 * measure the balance factor
 *
 * Return: This is function return the number in int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (search_height(tree->left) - search_height(tree->right));
}
