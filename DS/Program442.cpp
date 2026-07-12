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

class DoublyCL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;

    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyCL::DoublyCL()
{
    cout<<"Inside constructor\n";

    first = NULL;
    last = NULL;
    iCount = 0;

}

    void DoublyCL::Display()
    {}
    int DoublyCL::Count()
    {
        return iCount;
    }
    
    void DoublyCL::InsertFirst(int iNo)
    {}
    void DoublyCL::InsertLast(int iNo)
    {}
    void DoublyCL::InsertAtPos(int iNo, int iPos)
    {}
    
    void DoublyCL::DeleteFirst()
    {}
    void DoublyCL::DeleteLast()
    {}
    void DoublyCL::DeleteAtPos(int iPos)
    {}



int main()
{
    DoublyCL dobj;

   

    return 0;
}