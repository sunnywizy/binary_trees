#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		leaves = left + right;
		return ((!left && !right) ? leaves + 1 : leaves + 0);
	}
}
