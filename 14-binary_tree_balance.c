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
 * binary_tree_balance - Finds the balance factor of a binary tree
 * @tree: the root of the tree
 *
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = binary_node_height(tree->left);
	right = binary_node_height(tree->right);
	return (left - right);
}
