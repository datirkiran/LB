import java.util.*;;

class StringX 
{
    public int CountCapital(String str)
    {
        int i = 0, iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i< Arr.length; i++)
        {
            if(Arr[i] >='A' && Arr[i] <= 'Z')
            {
               iCount++;
            }   
        }
        return iCount;
    }
     public int CountSmall(String str)
    {
        int i = 0, iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i< Arr.length; i++)
        {
            if(Arr[i] >='a' && Arr[i] <= 'z')
            {
               iCount++;
            }   
        }
        return iCount;
    }
}

class Program272 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();
        int iRet = 0;

        System.out. println("Enter String : ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);

        System.out.println("Number of c characters : "+iRet);

        iRet = strobj.CountSmall(data);

        System.out.println("Number of Smal characters : "+iRet);

    }
}
