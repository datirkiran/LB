//type 3
import java.util.Scanner;

 class NumberX
{
    public boolean CheckPrime( int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
               break;
            }
        }

        if(iCnt < iNo/2)
        {
            return false;
        }
        else
        {
            return true;
        }

    }

}

class Program66
{
   
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;
        
                
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();
    
       NumberX nobj = new NumberX();

       bRet = nobj.CheckPrime(iValue);
       
       if(bRet == true)
       {
        System.out.println("it is Prime");
       }
       else
       {
        System.out.println("it is Not Prime");

       }

    }
    
}

//Time Complexity : O(N/2)
// where N >= 0
