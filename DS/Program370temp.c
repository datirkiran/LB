#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
   
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{}

int Count(PNODE frist)
{
    return 0;
}

void InsertFrist(PPNODE first, int iNo)
{}

void InsertLast(PPNODE first, int iNo)
{}

void InsertAtPos(PPNODE first, int iNo, int Pos)
{}

void DeleteFrist(PPNODE first)
{}

void DeleteLast(PPNODE first)
{}

void DeleteAtPos(PPNODE first, int Pos)
{}


int main()
{
    PNODE head = NULL;

    return 0;
}
