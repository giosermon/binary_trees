#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: height of a binary tree or 0 if tree is null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_node = 0;
	size_t side_node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			count_node = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			side_node = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((count_node > side_node) ? count_node : side_node);
	}
}
