// Inout : 11
// Output : * * * *
//          * * * *
import java.util.*;

class Program189
{
    public static void Display() 
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 4; iCnt++)
        {
            System.out.print("*\t");
        }
        System.out.println();

        for(iCnt = 1; iCnt <= 4; iCnt++)
        {
            System.out.print("*\t");
        }
        System.out.println();
    }
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        //System.out.println("Enter number of element :");
        //iValue = sobj.nextInt();

        Display();

        
    }
    
}
