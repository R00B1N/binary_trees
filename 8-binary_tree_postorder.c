#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that goes through a binary tree
 * using postorder traversal = left child then right child then root
 * @tree: root node of the tree
 * @func: a pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
