#include "binary_trees.h"
/**
 * binary_tree_insert_left - This is a function that inserts a node as the
 * left-child of another node
 * @parent: This is an argument that points to the node to insert the
 * left-child in
 * @value: This is an argument that represent the value to store in the new
 * node
 *
 * Return: The function return a pointer to the created node otherwise NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;

	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	else
		newNode->left = NULL;

	parent->left = newNode;
	return (newNode);
}
