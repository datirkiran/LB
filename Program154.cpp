#include<iostream>
using namespace std;

#pragma pack(1) 
class ArrayX
{
    public:
    int *Arr;
    int iSize;
};

int main()
{
    ArrayX aobj;

    cout<<sizeof(aobj)<<endl;   // 16 bytes (8 for pointer and 4 for integer and 4 for padding)

   return 0;

}