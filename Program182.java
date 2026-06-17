// Inout : 7
// Output : A B C D E F G

import java.util.*;


class Program182
{
    public static void Display(int iNo) 
    {
        int iCnt = 0;
        char ch = '\0';

        for(iCnt = 1, ch = 65; iCnt <= iNo; iCnt++,ch++)  // use ascii value
        {
            System.out.print(ch+"\t");
            
           
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
