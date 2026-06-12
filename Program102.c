# include<stdio.h>

void CallByValue(int iNo)
{
    iNo++;
}

int main()
{
    int iValue = 11;

    CallByValue(iValue);  // CallByValue(11);

    printf("Value After Function Call By Value : %d\n",iValue);

    return 0;
}