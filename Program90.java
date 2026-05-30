// program to calculate summation of digits in given number without using extra variable.
import java.util.*;

class DigitX
{
    public int SumDigit(int iNo)
    {
        int iSum = 0;

        while( iNo != 0) 
        {   
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;   
        }
        return iSum;
    }
}

class Program90
{
    public static void main( String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;
         
        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        iRet = dobj.SumDigit(iValue);

        System.out.println("Summation of digits : "+iRet);
    }
    
}