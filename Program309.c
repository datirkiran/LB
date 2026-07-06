
#include<stdio.h>

int main()
{
   unsigned iNo = 0;
   unsigned int iMask = 4;
   unsigned iAns = 0; 

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("3rd Bit is ON\n");
    }
    else
    {
        printf("3rd Bit is OFF\n");
    }



    return 0;
}