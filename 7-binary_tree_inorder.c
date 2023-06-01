#include "binary_trees.h"

/**
 * binary_tree_inorder - function goes through a binary_tree using
 * inorder traversal. This technique starts with the left subtree of the root,
 * then the root, and finally right subtree. Recursion is used to traverse
 * these trees.
 *@tree: pointer to the root node of the tree to traverse
 *@func: pointer to the function that performs action on each node. it accepts
 * the value of each node as a parameter and prints this value
 *
 * Return: None
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
