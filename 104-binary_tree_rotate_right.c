#include "binary_trees.h"
/**
 * binary_tree_rotate_right - This is a function that performs a
 * right-rotation on a binary tree
 * @tree: This is an argumemt that the pointer to tje root node of the tree to
 * rotate
 *
 * Return: This function return a pointer to the node of the teee once it
 * rotate
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *newNode;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	newNode = tree->left;
	if (newNode->right)
	{
		tree->left = newNode->right;
		tree->left->parent = tree;
	}
	else
		tree->left = NULL;

	newNode->right = tree;
	newNode->parent = tree->parent;
	tree->parent = newNode;

	return (newNode);
}
