#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: height of a binary tree or 0 if tree is null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		count_nodes++;
		binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		count_nodes++;
		binary_tree_height(tree->right);
	}
	return (count_nodes);
}
