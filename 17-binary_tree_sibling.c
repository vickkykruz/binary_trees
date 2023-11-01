#include "binary_trees.h"
/**
 * binary_tree_sibling - This is a function that finds the silbing of a node
 * @node: This is an argument that reprsent the pointer to the node to find
 * the sibling
 *
 * Return: This function return the pointer to the silbings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	tmp = node->parent;
	if (tmp->left == node)
		return (tmp->right);
	else
		return (tmp->left);
}
