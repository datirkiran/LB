#include<iostream>
using namespace std;

#pragma pack(1) 
class ArrayX
{
    public:
    int *Arr;
    int iSize;


    ArrayX(int x) // Parametrised Constructor  
    {
        cout<<"Inside Parametrised Constructor"<<endl;
        iSize = x;                   // Characteristics initilization
        Arr = new int[iSize];        // Resource Allocation
    }

    // Destructor
    ~ArrayX()
    {
        cout<<"Inside Destructor"<<endl;
        delete []Arr;  // Resource Deallocation
    }
};

int main()
{
    // tatic memory allocation for Object
    //ArrayX aobj1(5);

    ArrayX *aobj1 = new ArrayX(5);

    delete aobj1;

    cout<<"End of main"<<endl;
   

   return 0;

}