#include<stdio.h>
typedef unsigned int UINT;


int main()
{
    UINT iNo = 0;
    UINT iMask = 0;
    UINT iPos = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    printf("Enter Position : \n");
    scanf("%d",&iPos);

    iMask = iMask <<(iPos - 1);

    iNo = iNo ^ iMask;

    printf("Updated number is : %d\n", iNo);


   return 0;
}