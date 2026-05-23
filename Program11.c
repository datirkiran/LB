/*
START
     Accept number as NO

STOP

START
       Accept number as NO
       Divide No By 2

       IF remainder is 0

STOP

*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is Odd \n");
    }


    return 0;
}



      