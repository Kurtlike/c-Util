//
// Created by kurt on 27.02.2021.
//

#ifndef UTILS_STRUCTURES_BINARYTREE_H
#define UTILS_STRUCTURES_BINARYTREE_H

struct binaryTree{
    int item;
    struct binaryTree *left;
    struct binaryTree *right;
    struct binaryTree *parent;
};

void printTree( binaryTree *tree,std::string s);

template <typename T>
void insertTree(binaryTree **tree, binaryTree *parent, T item);
#endif //UTILS_STRUCTURES_BINARYTREE_H
