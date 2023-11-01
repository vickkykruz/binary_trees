#include "binary_trees.h"
/**
 * find_height - This is a function that return the height of a binary tree
 * @tree: This is an argument the reprsent the pointer to the root node of
 * the tree
 *
 * Return: This function return the height of the binary tree
 */
size_t find_height(const binary_tree_t *tree)
{
	size_t heightLeft, heightRight;

	heightLeft = tree->left ? 1 + find_height(tree->left) : 0;
	heightRight = tree->right ? 1 + find_height(tree->right) : 0;

	return (heightLeft > heightRight ? heightLeft : heightRight);
}
/**
 * curr_lvl - This is a function that return the current level of the binary
 * tree
 * @tree: This is an argument that reprsent the pointer to the root node of
 * the tree to traverse
 * @func: This is an argument that reprsent a pointer to a function.
 * @lvl: This is an argument that reprsent the current level passed
 *
 * Return: This function return a void
 */
void curr_lvl(binary_tree_t *tree, void (*func)(int), int lvl)
{
	if (tree == NULL)
		return;

	if (lvl == 1)
		func(tree->n);
	else if (lvl > 1)
	{
		curr_lvl(tree->left, func, lvl - 1);
		curr_lvl(tree->right, func, lvl - 1);
	}
}
/**
 * binary_tree_levelorder - This is a function that goes through a binary tree
 * using level-order traversal
 * @tree: This is an argument that reprsent the pointer to the root node of
 * the tree to traverse
 * @func: This is an argument that reprsent a pointer to a function to call
 * for each node. The value in the node must be passed as a parameter to this
 * function.
 *
 * Return: This function return a void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height_num, i;

	if (tree == NULL || func == NULL)
		return;

	height_num = find_height(tree) + 1;

	for (i = 0; i <= height_num; i++)
		curr_lvl((binary_tree_t *)tree, func, i);
}
