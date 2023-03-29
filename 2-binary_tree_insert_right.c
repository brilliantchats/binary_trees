#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: the node to insert the new node as the right child
 * @value: the variable to which to assign n for the new node
 *
 * Return: the new node, NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	if (parent->right)
	{
		node->right = parent->right;
		parent->right = node;
		node->left = NULL;
		node->parent = parent;
		node->right->parent = node;
	}
	else
	{
		parent->right = node;
		node->right = NULL;
		node->left = NULL;
		node->parent = parent;
	}

	return (node);
}
