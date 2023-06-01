#include "binary_trees.h"
/**
 * binary_tree_balance - function claculates the balance of a binary tree
 * it traverses the left and right subtree, records the number of nodes
 * adding 1 to account for the root. The difference btw these heights
 * gives the balance of the tree. it returns 0 if tree is null
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: returns the balance of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int sub_left = 0, sub_right = 0, bal;

	if (tree == NULL)
		return (0);

	if (tree->left)
		sub_left = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		sub_right = binary_tree_balance(tree->right) + 1;
	bal = sub_left - sub_right;
	return (bal);
}
