#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: Pointer to the parent node
 * Return: 1 if is leaf and 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if ((node != NULL) && (node->parent == NULL))
		return (1);
	return (0);
}
