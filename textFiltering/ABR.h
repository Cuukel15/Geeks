#if !defined(ABR_HEADER_FILE_H)
#define ABR_HEADER_FILE_H

typedef struct node {
    char *word;
    struct node *leftSon, *rightSon;
} Node, *Tree;

Tree addToTree(Tree, char*);
Tree extractMax(Tree);
Tree makeNode(char*);
Tree removeFromTree(Tree, char*);

void clearTree(Tree);
void displayTree(Tree);
void drawTree(char*, Tree);
void infixedMechanism(Tree);

#endif // ABR_H
