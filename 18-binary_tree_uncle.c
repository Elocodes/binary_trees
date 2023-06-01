#include "binary_trees.h"

/**
 * binary_tree_sibling - function finds the sibling of a node
 * @node: pointer to the node whose sibling is to be found
 *
 * Return: returns a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != NULL && node->parent->right != NULL)
	{
		if (node->parent->left == node)
		{
			return (node->parent->right);
		}
		else if (node->parent->right == node)
		{
			return (node->parent->left);
		}
	}
	else
	{
		return (NULL);
	}
	return (0);
}

/**
 * binary_tree_uncle - function returns the uncle of a node
 * a node has an uncle if its parent has a sibling
 * @node: pointer to the node whose uncle is to be found
 *
 * Return: returns a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

