#include<iostream>
using namespace std;

#pragma pack(1) 
class ArrayX
{
    private:
    int *Arr;
    int iSize;

    public:
    // parametrised constructor with default argument
    ArrayX(int x = 5)  
    {
        
        iSize = x;                   
        Arr = new int[iSize];       
    }
     ArrayX()  
    {
        
        iSize = 5;                   
        Arr = new int[iSize];       
    }

    ~ArrayX()
    {
        delete []Arr;  
    }
};

int main()
{

    ArrayX *aobj1 = new ArrayX();    // Paramteried contructor
    ArrayX *aobj2 = new ArrayX(15);   // Paramteried contructor

    // Logic (Function call)
 

    delete aobj1;
    delete aobj2;


   return 0;

}