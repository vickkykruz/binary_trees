#include "binary_trees.h"
/**
 * binary_tree_insert_right - This is a function that inserts a node as
 * the right-child of another node
 * @parent: This is an argument that reprsent a pointer to the node to insert
 * the right-child in
 * @value: This is an argument that represent the value to store in the new
 * node
 *
 * Return: This is a function that returns a pointer to the created node
 * otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;

	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	else
		newNode->right = NULL;

	parent->right = newNode;
	return (newNode);
}
