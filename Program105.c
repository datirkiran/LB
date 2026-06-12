# include<stdio.h>

void Display(int *ptr)
{
  printf("%d\n",*ptr);  
}

int main()
{
    int Arr[5] = {10,20,30,40,50};

    Display(Arr);


    return 0;
}