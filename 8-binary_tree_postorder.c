#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_postorder - Uses Postorder traversal to traverse a tree
 * @tree: the root of the tree
 * @func: Function to use on the n value of the node
 *
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		if (func)
			func(tree->n);
	}
}
