#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
   
}NODE, *PNODE, **PPNODE;   // type 2

// typedef struct node NODE;
// typedef struct node* PNODE;
// typedef struct node** PPNODE;

int main()
{
    PNODE head = NULL;

    return 0;
}
