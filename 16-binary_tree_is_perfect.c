#include "binary_trees.h"
int perfect(const binary_tree_t *tree, int size);

/**
 * binary_tree_is_perfect - Checks if a tree if perfect.
 * @tree: Pointer to the head of the tree.
 * Return: 1 if the tree is perfect. Otherwise 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right;
	int left;
	int size;

	if (tree == NULL)
		return (0);
	size = 0;
	left = perfect(tree->left, size);
	right = perfect(tree->right, size);

	if (right != left)
		return (0);
	if (right < 0 || left < 0)
		return (0);
	return (1);
}

/**
 * perfect - Checks if tree is perfect.
 * @tree: pointer to head of tree.
 * @size: size of tree.
 * Return: 1 if tree is perfect otherwise 0.
 */

int perfect(const binary_tree_t *tree, int size)
{
	int right;
	int left;

	left = size;
	right = size;

	if (!tree)
		return (0);

	left = left + perfect(tree->left, left);
	right = right + perfect(tree->right, right);

	if ((tree->left == NULL) && (tree->right != NULL))
		return (-1);
	if ((tree->left != NULL) && (tree->right == NULL))
		return (-1);
	if (right < 0 || left < 0)
		return (-1);
	if (left != right)
		return (-1);
	return (right + 1);
}
