#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, n = 0, a = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		n = binary_tree_leaves(tree->left);
		a = binary_tree_leaves(tree->right);
		leaves = n + a;
		return ((!n && !a) ? leaves + 1 : leaves + 0);
	}
}
