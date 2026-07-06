#include <stdio.h>

void ReverseDisplay(char *str)
{
    printf("%s");

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);


    return 0;
}