# include<stdio.h>

void Display(int iArr[])
{
  printf("%d\n",*iArr);

   iArr++; 
  
  printf("%d\n",*iArr);

    iArr++; 
  
  printf("%d\n",*iArr);
}

int main()
{
    int Brr[5] = {10,20,30,40,50};

    Display(Brr);


    return 0;
}