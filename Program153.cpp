#include<iostream>
using namespace std;

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