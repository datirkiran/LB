/*
    Algorithm

    START
        Accept first number as No1
        Accept second number as No2
        Perform addition of No1 & No2
        Display the result
    STOP
*/

#include<stdio.h>

int main()
{
    // Variable creation with default values
    float i = 0.0f,j = 0.0f,k = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&i);

    printf("Enter second number : \n");
    scanf("%f",&j);

    k = i + j;

    printf("Addition is : %f\n",k);

    return 0;
}