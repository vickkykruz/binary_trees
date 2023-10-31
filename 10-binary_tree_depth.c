#include "binary_trees.h"
/**
 * binary_tree_depth - This is a function that measures the depth of a node in
 * a binary tree
 * @tree: This is an argument that reprsent the pointer to the node to measure
 * the depth
 *
 * Return: The function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *tmp;
	int depth = 0;

	if (tree == NULL)
		return (0);

	for (tmp = tree; tmp->parent; tmp = tmp->parent)
		depth++;

	return (depth);
}
