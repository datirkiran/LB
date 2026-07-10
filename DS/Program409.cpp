#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
    private:
        PNODE first;
        int iCount;

    public:
        SinglyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyLL::SinglyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

void SinglyLL::Display()
{
    PNODE temp = NULL;
    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

int SinglyLL::Count()
{
    return this->iCount;
}

void SinglyLL:: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if(iCount == 0)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;     
    }

    this->iCount++;     // Important 
}
void SinglyLL::InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if(iCount == 0)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;
        
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    this->iCount++;     // Important 
}
void SinglyLL::InsertAtPos(int iNo, int iPos)
{}
void SinglyLL::DeleteFirst()
{
    PNODE temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    { 
        temp = this->first;
        this->first = this->first->next;    
    }

    this->iCount--;
}
void SinglyLL::DeleteLast()
{
    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {

    }

    this->iCount--;
}
void SinglyLL::DeleteAtPos(int iPos)
{}

int main()
{
    int iRet = 0;

    SinglyLL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of element are : "<<iRet<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of element are : "<<iRet<<endl;

    sobj.DeleteFirst();

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of element are : "<<iRet<<endl;
 
    return 0;
}