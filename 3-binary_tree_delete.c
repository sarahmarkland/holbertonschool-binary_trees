#include "binary_trees.h"
/**
 * binary_tree_delete - does what it says, says what it means
 * @tree: pointer to tree to delete
 * Return: nada
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
