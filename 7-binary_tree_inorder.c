#include "binary_trees.h"

/**
 * binary_tree_inorder - a function that goes through a binary tree
 * using inorder traversal = left child then root then right child
 * @tree: root node of the tree
 * @func: a pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
