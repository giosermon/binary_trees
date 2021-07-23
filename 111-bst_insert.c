#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: tree to be inserted
 * @value: value to be inserted
 * Return: tree inserted
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp;

	if (tree)
	{
		if (*tree == NULL)
		{
			*tree = (bst_t *)binary_tree_node(NULL, value);
			return (*tree);
		}
		temp = *tree;
		while (temp)
		{
			if (temp->n == value)
				break;
			if (temp->n > value)
			{
				if (!temp->left)
				{
					temp->left = (bst_t *)binary_tree_node(temp, value);
					return (temp->left);
				}
				temp = temp->left;
			}
			else if (temp->n < value)
			{
				if (!temp->right)
				{
					temp->right = (bst_t *)binary_tree_node(temp, value);
					return (temp->right);
				}
				temp = temp->right;
			}
		}
	}
	return (NULL);
}
