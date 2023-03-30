#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_node_depth - Finds the depth of a node
 * @node: the node to find the depth for
 *
 * Return: the depth
 */
size_t binary_node_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	if (!node || !node->parent)
		return (0);
	while (node->parent)
	{
		depth++;
		node = node->parent;
	}
	return (depth);
}
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of 2 nodes
 * @first: node no1
 * @second: node no2
 *
 * Return: pointer to the ancestor, NULL on failure
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *node, *lesser_node;
	size_t f_depth = binary_node_depth(first);
	size_t s_depth = binary_node_depth(second);
	size_t size_arr = (f_depth > s_depth) ? f_depth : s_depth;
	size_t j;
	const binary_tree_t **parent_arr;
	int i = 0;

	if (!first || !second || !first->parent || !second->parent)
		return (NULL);
	parent_arr = malloc(sizeof(binary_tree_t) * size_arr);
	if (f_depth > s_depth)
		node = first->parent;
	else
		node = second->parent;
	while (node)
	{
		parent_arr[i] = node;
		node = node->parent;
		i++;
	}
	if (f_depth <= s_depth)
		lesser_node = first;
	else
		lesser_node = second;
	while (lesser_node)
	{
		for (j = 0; j < size_arr; j++)
		{
			if (lesser_node == parent_arr[j])
				return (lesser_node->left->parent);
		}
		lesser_node = lesser_node->parent;
	}
	return (NULL);
}
