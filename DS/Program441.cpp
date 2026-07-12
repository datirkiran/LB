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

        
};

DoublyCL::DoublyCL()
{
    cout<<"Inside constructor\n";
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}


int main()
{
    DoublyCL sobj;

    return 0;
}