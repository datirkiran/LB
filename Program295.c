#include <stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    start = str;

    while (*str != '\0')
    {
        str++;
    }
    str--;
    while(start <= str)
    {
        printf("%s\n", str);
        str--;
    }
    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);

    return 0;
}