// Inout : 11
// Output : * * * *
//          * * * *
//          * * * *
import java.util.*;

class Program189
{
    public static void Display() 
    {
        int i = 0;
        int j = 0;
        for(i = 1; i <= 4; i++)
        {
            for(j = 1; j <= 4; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
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
