#include <stdio.h>

void strrevX(char *str)
{
   int i = 11;
   int j = 21;

   int temp = 0;

   temp = i;
   i = j;
   j = temp;

   printf("%d\n", i);
   printf("%d\n", j);

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);


    return 0;
}