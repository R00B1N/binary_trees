#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: the height (the longest path possible)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hr, hl;

	if (!tree)
		return (-1);
	hr = (tree->right) ? 1 + binary_tree_height(tree->right) : 0;
	hl = (tree->left) ? 1 + binary_tree_height(tree->left) : 0;
	if (hr >= hl)
		return (hr);
	else
		return (hl);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
