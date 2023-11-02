#include "binary_trees.h"
/**
 * binary_trees_ancestor - This is a function that finds the lowest common
 * ancestor of two node.
 * @first: This is an argument that reprsent the first pointer to the first
 * node.
 * @second: This is an argrument that reprsent the pointer to the second node
 *
 * Return: This function must return a pointer to the lowest common ancestor
 * node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *firstTmp, *secondTmp, *firstParent, *secondParent;

	if (first == NULL || second == NULL)
		return (NULL);

	firstParent = (binary_tree_t *)first;
	secondParent = (binary_tree_t *)second;

	while (firstParent && secondParent)
	{
		firstTmp = firstParent;
		secondTmp = secondParent;

		while (firstTmp)
		{
			if (firstTmp == secondTmp)
				return (firstTmp);
			firstTmp = firstTmp->parent;
		}
		firstTmp = firstParent;

		while (secondTmp)
		{
			if (secondTmp == firstTmp)
				return (secondTmp);
			secondTmp = secondTmp->parent;
		}
		firstParent = firstParent->parent;
		secondParent = secondParent->parent;
	}
	return (NULL);
}
