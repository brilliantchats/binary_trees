#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_size - Calculates the size of the binary tree
 * @tree: the root node of the tree
 *
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_depth;
	size_t right_depth;

	if (!tree)
		return (0);
	left_depth = binary_tree_size(tree->left);
	right_depth = binary_tree_size(tree->right);
	if (left_depth > right_depth)
		return (left_depth + 1 + right_depth);
	return (right_depth + 1 + left_depth);
}
