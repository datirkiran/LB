#include<iostream>
using namespace std;

#pragma pack(1) 
class ArrayX
{
    public:
    int *Arr;
    int iSize;

    // Default Constructor
    ArrayX()
    {

    }

    ArrayX(int x); // Parametrised Constructor  
};

int main()
{
    ArrayX aobj1;
    ArrayX aobj2(5);

    cout<<sizeof(aobj1)<<endl;  

   return 0;

}