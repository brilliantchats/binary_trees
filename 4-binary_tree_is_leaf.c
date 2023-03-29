#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: the node to check
 *
 * Return: 1 if node is a leaf, 0 if it's not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	else
		return (1);
}
