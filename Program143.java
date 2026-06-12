import java.util.*;

class Program143

{
    public static int summation(int Arr[])
    {
        int iSum = 0;
        int iCnt = 0;
        
        for ( iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;

    }
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;

        
            System.out.println("Enter the Number of Elements :");
            int iLength = sobj.nextInt();

            int Brr[] = new int[iLength];

            System.out.println("Enter the Elements :");
            for (iCnt = 0; iCnt < Brr.length; iCnt++)
            {
                Brr[iCnt] = sobj.nextInt();
            }

            System.out.println("Elements of Array are :");
            for (iCnt = 0; iCnt < Brr.length; iCnt++)
            {
                System.out.println(Brr[iCnt]);
            }

            int iRet = summation(Brr);
            System.out.println("Summation is : "+iRet);

            Brr = null;   // Deallocate the memory of Array
            System.gc();


    }
    
}
