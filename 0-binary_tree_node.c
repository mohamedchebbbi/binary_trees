#include "header.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binnary_tree_node - Function that create binary tree node.
 *
 * @p: pointer
 * @v: value
 * Return: pointer
 */

binary_tree_t *binary_tree_node(binary_tree_t *p, int v)
{
	binary_tree_t *newnode;

	(void) (pnewnode);
	(void) (v);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = v;
	newnode->p = p;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
