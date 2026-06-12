# include<stdio.h>

void CallByAddress(int *iPtr)
{
    (*iPtr)++;
}

int main()
{
    int iValue = 11;

    CallByAddress(&iValue);  // CallByAddress(11);

    printf("Value After Function Call By Value : %d\n",iValue);

    return 0;
}