#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - Uses inorder traversal to traverse a tree
 * @tree: the root of the tree
 * @func: function to pass the n value stored in a node
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		if (func)
			func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
