#include "binary_trees.h"

/**
 * binary_tree_is_full - function checks if a binary tree is full
 * A tree is full when all the nodes have either 0 or 2 child
 * @tree: pointer to the root node of the tree
 *
 * Return: return 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}