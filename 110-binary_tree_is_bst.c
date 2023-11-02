#include "binary_trees.h"
/**
 * _checkLeft - This is a function that check left the subtree of a tree
 * @tree: This is an argument that reprsent the pointer to the root node
 * @n: This is an argument that reprsent the number stored
 *
 * Return: This function return 0 if there is an substree greater than n
 * otherwise 1
 */
int _checkLeft(binary_tree_t *tree, int n)
{
	int i;

	if (tree == NULL)
		return (1);
	if (tree->n >= n)
		return (0);

	i = _checkLeft(tree->left, n);
	if (i == 0)
		return (0);
	i = _checkLeft(tree->right, n);
	if (i == 0)
		return (0);

	return (1);
}
/**
 * _checkRight - This is a function that check if the binary tree is a valid
 * binary tree
 * @tree: This is an argument that reprsent the pointer that point to the root
 * node
 * @n: This is an argument that repesent the number stored
 *
 * Return: This function return 1 if true otherwise 0
 */
int _checkRight(binary_tree_t *tree, int n)
{
	int i;

	if (tree == NULL)
		return (1);

	if (tree->n <= n)
		return (0);

	i = _checkRight(tree->left, n);
	if (i == 0)
		return (0);
	i = _checkRight(tree->right, n);
	if (i == 0)
		return (0);

	return (1);
}
/**
 * binary_tree_is_bst - This is a function that checks if a binary tree is a
 * valid Binary Search Tree
 * @tree: This is an argument that reprsent the pointer to the root node
 *
 * Return: This function return 1 if is tree otherwise 0 as not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = _checkLeft(tree->left, tree->n);
	right = _checkRight(tree->right, tree->n);

	if (left == 0 || right == 0)
		return (0);

	binary_tree_is_bst(tree->left);
	binary_tree_is_bst(tree->right);

	return (1);
}
