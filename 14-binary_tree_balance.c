#include "binary_trees.h"
int cal(const binary_tree_t *head, const binary_tree_t *tree, int difference);

/**
 * binary_tree_balance - Measures the balance factor of binary tree.
 * @tree: Pointer to the root.
 * heigth - measures the height of both left and right.
 * Return: differenceerence between branches.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int difference;

	difference = 0;
	if (tree == NULL)
		return (0);
	difference = cal(tree, tree, difference);
	return (difference);
}

/**
 * cal - balance factor calculator.
 * @head: root node of the tree.
 * @tree: pointer to the root of current node.
 * @difference: difference between left and right.
 * Return: The difference between branches.
 */

int cal(const binary_tree_t *head, const binary_tree_t *tree, int difference)
{
	int right;
	int left;

	right = difference;
	left = difference;
	if (tree == NULL)
		return (0);
	left = left + cal(head, tree->left, left);
	right = right + cal(head, tree->right, right);

	if (tree == head)
		return (left - right);
	if (right > left)
		return (right + 1);
	return (left + 1);
}
