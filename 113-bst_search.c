#include "binary_trees.h"

/**
 * bst_search - search node of tree
 * @tree: tree to be search
 * @value: value to be searched
 *
 * Return: node of value searched
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	while (tree != NULL)
	{
		if (value == tree->n)
			return ((void *)tree);

		if (value > tree->n)
			tree = tree->right;
		else
			tree = tree->left;
	}
	return (NULL);
}
