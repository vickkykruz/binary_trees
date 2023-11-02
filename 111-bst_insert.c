#include "binary_trees.h"
/**
 * bst_insert - This isna function that inserts a value in a Binary Search
 * Tree
 * @tree: This is an argument that reprsent a  double pointer to the root node
 * of the BST ro insert value
 * @value: This is an argument that reprsent the value to be stored
 *
 * Return: This function return a pointer to the created node otherwise NULL
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *newNode, *tmp, *parent;

	if (!(*tree))
	{
		newNode = (bst_t *)binary_tree_node(NULL, value);
		*tree = newNode;
		return (newNode);
	}

	tmp = *tree;
	while (tmp)
	{
		parent = tmp;
		if (value < tmp->n)
			tmp = tmp->left;
		else if (value > tmp->n)
			tmp = tmp->right;
		else
			return (NULL);
	}

	newNode = (bst_t *)binary_tree_node(parent, value);
	if (value > parent->n)
		parent->right = newNode;
	else
		parent->left = newNode;

	return (newNode);
}
