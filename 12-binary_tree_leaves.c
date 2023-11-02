#include "binary_trees.h"

/**
 * binary_tree_leaves - counts number of leaves in binary tree
 * @tree: pointer to root node
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves, left_leaves, right_leaves;

	leaves = 0;
	left_leaves = 0;
	right_leaves = 0;

	if (!tree)
		return (0);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
    leaves = left_leaves + right_leaves;
	return (leaves);
}
