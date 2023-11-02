#include "binary_trees.h"
int calculate_diff(const binary_tree_t *, const binary_tree_t *, int);

/**
 * binary_tree_balance - Measures the balance factor of binary tree.
 * @tree: Pointer to the root.
 * heigth - measures the height of both left and right.
 * Return: difference between branches.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int diff;

	diff = 0;
	if (tree == NULL)
		return (0);
	diff = calculate_diff(tree, tree, diff);
	return (diff);
}

/**
 * difference - measures balance factor of binary tree.
 * @h: The original root node of the tree.
 * @tree: Pointer to the root of the current node.
 * @diff: difference between left and right branch
 * Return: The difference between branches.
 */

int difference(const binary_tree_t *head, const binary_tree_t *tree, int diff)
{
	int right;
	int left;

	right = diff;
	left = diff;
	if (tree == NULL)
		return (0);
	left = left + difference(head, tree->left, left);
	right = right + difference(head, tree->right, right);

	if (tree == head)
		return (left - right);
	if (right > left)
		return (right + 1);
	return (left + 1);
}
