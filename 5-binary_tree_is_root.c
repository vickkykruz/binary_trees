#include "binary_trees.h"
/**
 * binary_tree_is_root - This is a function that checks if a given node is a
 * root
 * @node: This argument that represnt the pointer to the node to check
 *
 * Return: This function return 1 if node is a root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);

	return (1);
}
