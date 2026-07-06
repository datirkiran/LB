#include<stdio.h>

typedef unsigned int UINT;

int main()
{
   UINT iNo = 0;
   UINT iMask = 4096;  // 13th bit
   UINT iAns = 0; 

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("13th Bit is ON\n");
    }
    else
    {
        printf("13th Bit is OFF\n");
    }



    return 0;
}