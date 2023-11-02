#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of binary tree.
 * @tree: Pointer to the root.
 * heigth - measures the height of both left and right.
 * Return: difference between branches.
 */

typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	else
	{
		int left_height = height(tree->left);
		int right_height = height(tree->right);

		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}


int binary_tree_balance(const binary_tree_t *tree)
{
	binary_tree_t difference;

	difference = 0;

	if (tree == NULL)
		return 0;

	else
		difference = height(tree->left) - height(tree->right);
	return (difference);
}
