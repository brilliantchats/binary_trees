#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: the node to insert the new node as the left child
 * @value: the variable to which to assign n for the new node
 *
 * Return: the new node, NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	if (parent->left)
	{
		node->left = parent->left;
		parent->left = node;
		node->right = NULL;
		node->parent = parent;
		node->left->parent = node;
	}
	else
	{
		parent->left = node;
		node->left = NULL;
		node->right = NULL;
		node->parent = parent;
	}

	return (node);
}
