#include "binary_trees.h"
/**
 * binary_tree_size -determines the size of the binary tree
 * @tree: pointer to the root node of the tree to be measured
 * Return: size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, left_size, right_size;

	size = 0;
	left_size = 0;
	right_size = 0;

	if (!tree)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	size = left_size + right_size + 1;
	return (size);
}
