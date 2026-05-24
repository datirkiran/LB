 // Input: 5
// Output: 1 2 3 4 5
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%d/t",iCnt);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    return 0;
}