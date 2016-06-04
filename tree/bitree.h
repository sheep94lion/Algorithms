#ifndef BITREE_H
#define BITREE_H

struct BTNode {
    int key;
    struct BTNode *left;
    struct BTNode *right;
    struct BTNode *parent;
};

void inorder_tree_walk(struct BTNode* t);

#endif
