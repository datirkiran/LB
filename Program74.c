// Input: 5
// Output: 1 2 3 4 5

#include<stdio.h>

int main()
{
    int iCnt = 0;

    iCnt = 5;

    while (iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
    printf("\n");
    

    return 0;
}