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
 * num_count - This is a function that return the number of nodes in a binary
 * tree
 * @tree: This is an argument that reprsent the pointer to the root node
 *
 * Return: This function return the number of nodes in the binary tree
 */
int num_count(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + num_count(tree->left) + num_count(tree->right));
}
/**
 * binary_tree_is_perfect - This is a function that checks if a binary tree
 * is perfect
 * @tree: This is an argument that reprsent the pointer to the root node of
 * the tree
 *
 * Return: This is a function that return an interger value (0 or 1)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int treeNode, levels, parentNode;

	if (tree == NULL)
		return (0);

	levels = search_height(tree);

	while (levels != 0)
	{
		parentNode *= 2;
		levels--;
	}

	parentNode -= 1;
	treeNode = num_count(tree);

	if (treeNode == parentNode)
		return (1);
	else
		return (0);
}
