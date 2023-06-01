#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function checks if a given node is leaf
 * A node is a leaf when it has no child
 * @node: pointer to the node to check
 *
 * Return: returns 1 if node is leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node->right == NULL) && (node->left == NULL))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
