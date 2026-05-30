// Program to convert while loop into for loop.
import java.util.*;

class DigitX
{
    public void DisplayDigit(int iNo)
    {
        int iDigit = 0;

        for( ;iNo != 0;  )          //  for(; ; ) is infinite loop.
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;   
        }
    }
}

class Program81
{
    public static void main( String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        dobj.DisplayDigit(iValue);
    }
    
}
