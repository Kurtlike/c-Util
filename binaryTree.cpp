//
// Created by kurt on 27.02.2021.
//
#include <cstdlib>
#include <iostream>
#include "binaryTree.h"

template <typename T>
void insertTree(binaryTree **tree, binaryTree *parent, T item){
    if(*tree == nullptr){
        auto *t = static_cast<binaryTree *>(malloc(sizeof(struct binaryTree)));
        t->item = item;
        t->left = t->right = nullptr;
        t->parent = parent;
        *tree=t;
        return;
    }
    if(item<(*tree)->item){
        insertTree(&((*tree)->left),*tree,item);
    }
    else{
        insertTree(&((*tree)->right),*tree,item);
    }
}


void printTree( binaryTree *tree,std::string s){
    std::cout<<s<<" "<<tree->item<<std::endl;
    if(tree->left!= nullptr){
        s.append("l");
        printTree(tree->left,s);
        s.pop_back();    }
    if(tree->right!= nullptr){
        s.append("r");
        printTree(tree->right,s);
        s.pop_back();
    }

}
