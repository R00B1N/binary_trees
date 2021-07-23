#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node in a binary tree
 * @node: a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return ((node == (node->parent)->left)
			? (node->parent)->right : (node->parent)->left);
}
