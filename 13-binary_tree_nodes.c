#include "binary_trees.h"

/**
 * binary_tree_nodes - checks if tree has at least 1 child
 * @tree: pointer to root node
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	nodes = 0;

	if (tree == NULL)
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		nodes +=1;

	return (nodes);
}
