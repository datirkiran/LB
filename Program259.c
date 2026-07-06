#include<stdio.h>

int CountUpdate(char * str)
{
    int iCount = 0;

   while(*str != '\0')
   {
    if (*str == 'l')
    {
    *str == 'L';
    }
    str++;
   }
   return iCount;
 
}

int main()
{
    char Arr[50] = {'\0'};
   
    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr); 

    CountUpdate(Arr);

    printf("Upadated stiring  is : %s\n", Arr);

     return 0;
}

   
