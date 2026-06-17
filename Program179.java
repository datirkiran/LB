// Inout : 7
// Output : a b c d e f g

import java.util.*;

class Program179
{
    public static void Display(int iNo) 
    {
        int iCnt = 0;
        char ch = 'a';

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print(ch);
            ch++;
           
        }
        System.out.println();   
    }
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter number of element :");
        iValue = sobj.nextInt();

        Display(iValue);
    }  
}
