#include "binary_trees.h"

/**
 * binary_tree_depth - determine a node's depth
 * @node: Node whose depth is being calculated
 * Return: The depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	depth = 0;
	if (!node)
		return (depth);

	for (; node->parent != NULL; depth++)
		node = node->parent;
	return (depth);
}

