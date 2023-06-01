#include "binary_trees.h"
/**
 * binary_tree_depth - function claculates the depth of a given node in
 * a binary tree. it returns 0 if tree is null
 * @tree: pointer to the node whose depth or level is to be measured
 *
 * Return: returns the dept of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int level_count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		level_count += 1;
		tree = tree->parent;
	}
	return (level_count);
}
