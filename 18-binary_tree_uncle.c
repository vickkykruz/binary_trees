#include "binary_trees.h"
/**
 * binary_tree_uncle - This is function that finds the uncle of a node
 * @node: This is an argument that reprsent the pointer to the node
 * to find the uncle
 *
 * Return: This is a function that return the pointer
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL || node->parent == NULL ||
		node->parent->parent == NULL)
		return (NULL);

	tmp = node->parent->parent;
	if (tmp->left == node->parent)
		return (tmp->right);
	else
		return (tmp->left);
}
