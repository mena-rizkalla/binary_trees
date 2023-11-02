#include "binary_trees.h"


/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->right && !node->left)
	{
		return (1);
	}

	return (0);
}
