#include "binary_trees.h"
/**
 * binary_tree_height - function claculates the height of a binary tree
 * it traverses the left and right subtree, records the number of nodes
 * adding 1 to account for the root. The greater of the subtrees give the
 * height of tree. it returns 0 if tree is null
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: returns the int value of height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int sub_left = 0, sub_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		sub_left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		sub_right = binary_tree_height(tree->right) + 1;
	if (sub_left > sub_right)
		return (sub_left);
	return (sub_right);
}

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

/**
 * binary_tree_is_perfect - a tree is perfect when the height of both subtrees
 * are eual, and the treee is full.
 * A tree is full when all the nodes have either 0 or 2 child
 * @tree: pointer to the root node of the tree
 *
 * Return: return 1 if full, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/*else if (tree->left && tree->right)*/
	return ((binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
		&& (binary_tree_height(tree->left) == binary_tree_height(tree->right)));
	/*return (0);*/
}
