#include "binary_trees.h"
/**
 * binary_tree_nodes - checks if tree has at least 1 child
 * @tree: pointer to root node
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes, left_nodes, right_nodes;

	nodes = 0;
	left_nodes = 0;
	right_nodes = 0;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	if ((tree->left == NULL) || (tree->right == NULL))
		return;
	else
		return (1);
	nodes = left_nodes + right_nodes;
	return (nodes);
}
