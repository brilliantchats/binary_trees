#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_node_height - Gets the height of a tree
 * @tree: the root of the tree
 *
 * Return: Returns height of the node
 */
int binary_node_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_node_height(tree->left);
	right_height = binary_node_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: the root of the tree
 *
 * Return: 1 if its perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = binary_node_height(tree->left);
	right = binary_node_height(tree->right);
	if ((left == right) && ((tree->left && tree->right) ||
				(!tree->left && !tree->right)))
		return (1);
	return (0);
}
