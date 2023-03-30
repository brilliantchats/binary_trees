#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts nodes with at least 1 child
 * @tree: the root of the tree
 *
 * Return: the number of nodes who are parents
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_parents;
	size_t right_parents;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left_parents = binary_tree_nodes(tree->left);
	right_parents = binary_tree_nodes(tree->right);
	return (left_parents + right_parents + 1);
}
