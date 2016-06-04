#include "bitree.h"
#include <stdio.h>

void inorder_tree_walk(struct BTNode* t){
    if(t != NULL){
        inorder_tree_walk(t->left);
        printf("%d\n", t->key);
        inorder_tree_walk(t->right);
    }
}

struct BTNode *tree_search(struct BTNode* t, int k){
    if(t == NULL || t->key = k){
        return t;
    }
    if(k < t->key){
        return tree_search(t->left, k);
    }else{
        return tree_search(t->right, k);
    }
}

struct BTNode *iterative_tree_search(struct BTNode* t, int k){
    while(t != NULL && t->key != k){
        if(k < t->key){
            t = t->left;
        } else {
            t = t->right;
        }
    }
    return t;
}

struct BTNode *tree_minimum(struct BTNode* t){
    while(t->left != NULL){
        t = t->left;
    }
    return t;
}

struct BTNode *tree_maximum(struct BTNode* t){
    while(t->right != NULL){
        t = t->right;
    }
    return t;
}

struct BTNode *tree_successor(struct BTNode* t){
    if(t->right != NULL){
        return tree_minimum(t->right);
    }
    struct BTNode* y;
    y = t->parent;
    while(y != NULL && t == y->right){
        t = y;
        y = y->parent;
    }
    return y;
}

struct BTNode *tree_predecessor(struct BTNode* t){
    if(t->left != NULL){
        return tree_maximum(t->left);
    }
    struct BTNode* y;
    y = t->parent;
    while (y != NULL && t == y->left) {
        t = y;
        y = y->parent;
    }
    return y;
}
