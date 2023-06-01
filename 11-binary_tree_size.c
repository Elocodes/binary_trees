#include "binary_trees.h"
/**
 * binary_tree_size - function claculates the size of a binary tree
 * it traverses the left and right subtree, records the number of nodes
 * sums and adds 1 to account for the root. it returns 0 if tree is null
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: returns the int value of size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int sub_left = 0, sub_right = 0, size;

	if (tree == NULL)
		return (0);

	if (tree->left)
		sub_left = binary_tree_size(tree->left);
	if (tree->right)
		sub_right = binary_tree_size(tree->right);
	size = (sub_left + sub_right) + 1;
	return (size);
}
