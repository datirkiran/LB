#include<stdio.h>
typedef unsigned int UINT;


int main()
{
    // position : 23
    UINT iNo = 0;
    UINT iMask = 0XFFBFFFFF;
    UINT iPos = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;

    printf("Updated number is : %d\n", iNo);


   return 0;
}