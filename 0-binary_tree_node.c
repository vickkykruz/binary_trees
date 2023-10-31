#include "binary_trees.h"

/**
 * binary_tree_node - This a function that creates a binary tree node
 * @parent: This is an argument that points to the parent node of the node to
 * create
 * @value: This is an argument that is put in the new node
 *
 * Return: This function return a new node otherwise NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
