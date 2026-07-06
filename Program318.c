#include<stdio.h>
typedef unsigned int UINT;

int main()
{
    UINT iMask = 0X1;
    int iCnt = 0;

    printf("%d\n",iMask);     // 1
    iMask = iMask<<1;

    printf("%d\n",iMask);   // 2
    iMask = iMask<<1;

    printf("%d\n",iMask);   // 4
    iMask = iMask<<1;

    printf("%d\n",iMask);  // 8
    iMask = iMask<<1;

    printf("%d\n",iMask);   // 16
    iMask = iMask<<1;

    printf("%d\n",iMask);    //32
    iMask = iMask<<1;

    printf("%d\n",iMask);   // 64
    iMask = iMask<<1;

    printf("%d\n",iMask);  // 128
    iMask = iMask<<1;

    printf("%d\n",iMask);  // 128
    iMask = iMask<<1;

    printf("%d\n",iMask);  // 256
    iMask = iMask<<1;

    printf("%d\n",iMask);  // 512
    iMask = iMask<<1;


   return 0;
}