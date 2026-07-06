#include <stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
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
    while (start<= end)
    {
        temp = *start;
        start = *end;
        end = temp;

        start++;
        end--;

    }
    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

     strrevX(Arr);

    return 0;
}