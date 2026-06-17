 
 /*
        iRow = 4
        iCol = 4

        1
        1 2 
        1 2 3 
        1 2 3 4
          
        
*/
import java.util.*;

 class Pattern
 {
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;

         if(iRow != iCol)
        {
             System.out.println("Invaild parameter"); 
             System.out.println("Number of Ro and column be ame :"); 
             return;

        }

       
        for(i = 1; i<= iRow; i++)
        {
            for(j = 1; j <= i; j++)
            { 
                System.out.print(j+"\t");     
            }
            System.out.println();
        }

    }

 }

 class Program224
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of Rows :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of Columns :");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);

    }
    
}
