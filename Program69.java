//type 3
import java.util.Scanner;

 class NumberX
{
    public boolean CheckPrime( int iNo)
    {
        int iCnt = 0;
        boolean bFlag = false;

        for(bFlag = true, iCnt = 2; iCnt <= (iNo / 2); iCnt++)   // Multi initialization
        {
            if((iNo % iCnt) == 0)
            {
               bFlag = false;
               break;
            }
        }

        return bFlag;    

    }
    
}

class Program69
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
