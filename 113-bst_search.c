#include "binary_trees.h"
/**
 * bst_search - This is a function that searches for a value in a Binary
 * Search Tree
 * @tree: This is an argument that reprsent the pointer to the root node
 * @value: This is an argument that reprsent the value to be search in the
 * tree
 *
 * Return: This function return pointer to the node othwerwise NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *tmp;

	if (tree == NULL)
		return (NULL);

	tmp = (bst_t *)tree;
	while (tmp)
	{
		if (tmp->n == value)
			return (tmp);

		if (tmp->n > value)
			tmp = tmp->left;
		else if (tmp->n < value)
			tmp = tmp->right;
	}

	return (NULL);
}
