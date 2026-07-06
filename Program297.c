#include <stdio.h>

// Call by Vallue
void Swap(int No1, int No2)
{
   int temp = 0;

   temp = No1;
   No1 = No2;
   No2 = temp;

   printf("%d\n", No1);
   printf("%d\n", No2);

}

int main()
{

   int i = 11;
   int j = 21;



    return 0;
}