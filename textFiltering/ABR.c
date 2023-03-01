#include "ABR.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Tree addToTree(Tree bst, char *word) {
    printf("[i]: Adding '%s' to the BST . . .\n", word);
    if(!bst)
        return makeNode(word);
    if(strcmp(word, bst->word) == 0) {
        printf("     failed !\n");
        printf("[!]: This word is already in the tree\n");
        return bst;
    }
    else if(strcmp(word, bst->word) < 0)
        bst->leftSon = addToTree(bst->leftSon, word);
    else
        bst->rightSon = addToTree(bst->rightSon, word);
    printf("     success !\n");
    return bst;
}

Tree extractMax(Tree bst) {
    printf("[i]: Removing the greatest world of the BST . . .\n");
    if(!bst) {
        printf("     failed !\n");
        printf("[!]: The tree is empty\n");
        return NULL;
    }
    Tree temp = bst;
    while(temp->rightSon)
        temp = temp->rightSon;
    free(temp);
    temp = NULL;
    printf("     success !\n"); 
    return temp;
}

Tree makeNode(char *word) {
    printf("[i]: Creating new node for '%s' . . .\n", word);
    Tree result = (Tree) malloc(sizeof(Node));
    if(!result) {
        printf("     failed !\n");
        printf("[!]: Not enough memory space for new node\n");
        return NULL;
    }
    result->word = (char*) malloc((strlen(word) + 1) * sizeof(char));
    strcpy(result->word, word);
    result->leftSon = result->rightSon = NULL;
    printf("     success !\n");
    return result;
}

Tree removeFromTree(Tree bst, char *word) {}

void clearTree(Tree bst) {}

void displayTree(Tree bst) {
    printf("\n)> BINARY SEARCH TREE DISPLAYER :\n");
    printf("----------------------------------\n");
    if(!bst)
        printf("\t[!]: No data recorded\n");
    else
        infixedMechanism(bst);
    printf("\n");
}

void drawTree(char *fileName, Tree bst) {}

void infixedMechanism(Tree bst) {
    if(bst) {
        infixedMechanism(bst->leftSon);
        printf("\t%s\n", bst->word);
        infixedMechanism(bst->rightSon);
    }
}
