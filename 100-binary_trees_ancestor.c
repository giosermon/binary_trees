#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that checks an ancestor
 * @first: First node
 * @second: Second node
 * Return: the node of the ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *f_node, *s_node;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	f_node = first->parent;
	s_node = second->parent;
	if (f_node == NULL || first == s_node || (!f_node->parent && s_node))
	{
		return (binary_trees_ancestor(first, s_node));
	}
	else if (s_node == NULL || f_node == second || (!s_node->parent && f_node))
	{
		return (binary_trees_ancestor(f_node, second));
	}
	return (binary_trees_ancestor(f_node, s_node));
}
