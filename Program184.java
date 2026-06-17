// Inout : 7
// Output : A * B * C * D 

import java.util.*;


class Program184
{
    public static void Display(int iNo) 
    {
        int iCnt = 0;
        char ch = '\0';
        int iCount = 0;

        for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++)
        {
           if(iCnt % 2 == 0)
           {
             System.out.print(ch+"\t");
           }
           else
           {
            System.out.print("*\t");
            iCount++;
            ch++;

           }
        
              
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
