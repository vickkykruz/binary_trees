#include "binary_trees.h"
/**
 * binary_tree_rotate_left - This is a function that performs a left-rotation
 * on a binary tree
 * @tree: This is an argument that reprsent the pointer to the root node
 *
 * Return: This function return the pointer that points to the new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *newNode;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	newNode = tree->right;
	if (newNode->left)
	{
		tree->right = newNode->left;
		tree->right->parent = tree;
	}
	else
		tree->right = NULL;

	newNode->left = tree;
	newNode->parent = tree->parent;
	tree->parent = newNode;

	return (newNode);
}
