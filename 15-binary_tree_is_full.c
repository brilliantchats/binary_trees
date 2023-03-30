#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: the root node
 *
 * Return: 1 if its full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;
	if (!tree)
		return (0);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == right)
		return (1);
	return (0);
}
