 // Input: 8
// Output: 1 3 5 7
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt < iNo; iCnt = iCnt + 1)
    {
        printf("%d/t",iCnt);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    return 0;
}