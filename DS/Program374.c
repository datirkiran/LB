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
{
    while (first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while (first != 0)
    {
        iCount++;
        first = first ->next;
    }
    
    return iCount;
}

void InsertFrist(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)   // LL is empty
    {
        *first = newn;
    }
    else                 // LL contains atleast 1 node
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)
{
        PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)   // LL is empty
    {
        *first = newn;
    }
    else                 // LL contains atleast 1 node
    {}
}

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
    int iRet = 0;

    InsertFrist(&head,101);
    InsertFrist(&head,51);
    InsertFrist(&head,21);
    InsertFrist(&head,11);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    return 0;
}
