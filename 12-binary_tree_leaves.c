#include "binary_trees.h"

/**
 * binary_tree_leaves - function counts the leaves in a binary tree
 * A node is a leaf when it has no child
 * @tree: pointer to the root node of the tree
 *
 * Return: return the number of leaf nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int counter = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		counter += 1;
	counter += binary_tree_leaves(tree->left);
	counter += binary_tree_leaves(tree->right);
	return (counter);
}
