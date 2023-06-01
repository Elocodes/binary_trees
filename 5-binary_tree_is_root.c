#include "binary_trees.h"

/**
 * binary_tree_is_root - function checks if a given node is root
 * A node is a root when it has no parent. it is itself the parent to others
 * @node: pointer to the node to check
 *
 * Return: returns 1 if node is leaf, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
