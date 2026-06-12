#include<iostream>
using namespace std;

#pragma pack(1) 
class ArrayX
{
    private:
    int *Arr;
    int iSize;

public:
    ArrayX(int x)  
    {
        
        iSize = x;                   
        Arr = new int[iSize];       
    }

    ~ArrayX()
    {
        delete []Arr;  
    }
};

int main()
{

    ArrayX *aobj1 = new ArrayX();    // Default contructor
    ArrayX *aobj2 = new ArrayX(5);   // Paramteried contructor

    // Logic (Function call)
 

    delete aobj1;
    delete aobj2;


   return 0;

}