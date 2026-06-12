# include<stdio.h>

void Display(int *ptr)
{
    printf("Value of iPtr : %d\n",ptr);
}
int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("Base address of Arr : %d\n",Arr);
    Display(Arr);


    return 0;
}