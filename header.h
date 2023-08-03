#ifndef BINATREE
#define BINATREE

#include <stdlib.h>
#include <stddef.h>
/**
 * struct binary_tree_x - Binary tree node
 *
 * @i: Integer
 * @p: pointer
 * @l: pointer to the left
 * @r: pointer to the right
 */
struct binary_tree_x
{
	int i;
	struct binary_tree_x *p;
	struct binary_tree_x *l;
	struct binary_tree_x *r;
};

typedef struct binary_tree_x binary_tree_t;

typedef struct binary_tree_x bst_t;

typedef struct binary_tree_x avl_t;

typedef struct binary_tree_x heap_t;


/**
 * struct queue - simple queue
 *
 * @node: is the value
 * @next: is the next node in the queue
 */
struct queue
{
	binary_tree_t *node;
	struct queue *next;
};

typedef  struct queue queue;

void binary_tree_print(const binary_tree_t *);

binary_tree_t *binary_tree_node(binary_tree_t *p, int v);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
int binary_tree_is_complete(const binary_tree_t *tree);

#endif


