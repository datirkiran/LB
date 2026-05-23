

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
     int iRemainder = 0;

    iRemainder = iNo % 2;

    if(iRemainder == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is Odd \n");
    }

}

int main()
{
    int iValue = 0;
   

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}



      