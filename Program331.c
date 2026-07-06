#include<stdio.h>
typedef unsigned int UINT;

// Position 11
int main()
{
    UINT iNo = 0;
    UINT iMask = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    iMask = 0X400;

    iNo = iNo ^ iMask;

    printf("Updated number is : %d\n", iNo);


   return 0;
}