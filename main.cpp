#include <iostream>
#include "binaryTree.h"

int main() {
    struct binaryTree *tree= nullptr;
    insertTree(&tree,tree,10);
    insertTree(&tree,tree,8);
    insertTree(&tree,tree,11);
    insertTree(&tree,tree,6);
    insertTree(&tree,tree,9);
    insertTree(&tree,tree,10);
    insertTree(&tree,tree,12);
    printTree(tree,"");
    return 0;
}
