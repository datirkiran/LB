
#include<stdio.h>

int main()
{
    int iNo = 0;
    int iMask = 4;
    int iAns = 0; 

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