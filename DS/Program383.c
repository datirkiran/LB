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
    while (first != NULL) // Type 1
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while (first)
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

    if(NULL == *first)   // LL is empty
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
        PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)   // LL is empty
    {
        *first = newn;
    }
    else                 // LL contains atleast 1 node
    {
        temp = *first;

        while (temp->next != NULL) // type 1
        {
            temp = temp->next;
        }

        temp->next = newn;
        
    }
}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{
    int iCount = 0;
    int i = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;
    
    iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount+1))
    {
        printf("Invalid Position");
        return;
    }
    if(iPos == 1)
    {
        InsertFrist(first, iNo);

    }
    else if (iPos == iCount+1)
    {
        InsertLast(first, iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;

        temp = *first;

        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next =newn; 
    }
}

void DeleteFrist(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)                 // LL is Empty
    {
        return;
    }
    else if ((*first) -> next == NULL)  // LL contains 1 node
    {
        free(*first);
        *first = NULL;
    }
    else                             // LL contains more then 1 Node
    {
        temp = *first;

        *first = (*first) ->next;
        free(temp);

    }
    
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)                 // LL is Empty
    {
        return;
    }
    else if ((*first) -> next == NULL)  // LL contains 1 node
    {
        free(*first);
        *first = NULL;
    }
    else                             // LL contains more then 1 Node
    {
        temp = *first;

        while (temp->next->next != NULL)     // type 3
        {
          temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
        
    }
}

void DeleteAtPos(PPNODE first, int iPos)
{

    int iCount = 0;
    
    iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount))
    {
        printf("Invalid Position");
        return;
    }
    if(iPos == 1)
    {
        DeleteFrist(first);

    }
    else if (iPos == iCount)
    {
        DeleteLast(first);
    }
    else
    {}
}

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

    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    DeleteFrist(&head);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    InsertAtPos(&head,105,4);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);


    return 0;
}
