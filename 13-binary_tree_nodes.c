#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: the number of non leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		child = 1;
	return (child + binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right));
}
