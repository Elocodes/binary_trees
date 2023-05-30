#include "binary_trees.h"

/**
 * binary_tree_insert_left - function inserts a node as the left child
 * of another node no matter the level of the parent node. that is, the
 * parent could be the root node or node at another level whether left
 * or right
 * @parent: parent of the new node.
 * @value: value of the new node
 *
 * Return: returns a pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*create a child node*/
	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	/*insert new node as the left child of parent*/
	/*if another already there, make it the left child of new node*/
	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	else
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->left->parent = new_node;
	}
	return (new_node);
}
