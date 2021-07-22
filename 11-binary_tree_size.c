#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of a binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (tree == NULL)
	{
		return (0);
	}
	hl = tree->left ? binary_tree_size(tree->left) : 0;
	hr = tree->right ? binary_tree_size(tree->right) : 0;


	return (hl + hr + 1);
}
