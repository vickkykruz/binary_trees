#include "binary_trees.h"
/**
 * array_to_bst - This is a function that builds a Binary Search Tree from
 * an array
 * @array: This isban argument that reprsent the first element of an array
 * @size: This is an argument that reprssent the number of elements in the
 * array
 *
 * Return: This function return the pointer to the root node of the created
 * BST otherwise NULL aa failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *tmp = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&tmp, array[i]);

	if (i == size)
		return (tmp);

	return (NULL);
}
