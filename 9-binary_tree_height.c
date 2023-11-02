#include "binary_trees.h"

/**
* binary_tree_height - gets the height of the tree
* @tree: tree whose height is being calculated
* Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, right_height, left_height;

	height = 0;
	right_height = 0;
	left_height = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left);
		left_height += 1;
	}
	else
		left_height = 0;

	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right);
		right_height += 1;
	}
	else
		right_height = 0;

	if (left_height >= right_height)
		height = (left_height);
	else
		height = (right_height);

	return (height);
}
