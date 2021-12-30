/*
 * Author: Matheus Amorim Constancio
 *
 * Binary Search Tree implementation
 */

#include "bst.h"

void usage()
{
    //TODO
    printf("./avl <FILENAME>\n");
}

int main(int argc, char *argv[])
{
    Node *root = NULL;

    FILE *file = fopen("bst.dot", "w");

    if (!file) {
        printf("File not open\n");
        return 1;
    }

    //random_tree(&root, 10);

    dot_fmt(file, root);

    return 0;
}
