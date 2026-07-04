import java.util.*;
import Marvellous.StringX;

class Program276 
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
        System.out.println("Number of Small characters : "+iRet);

        iRet = strobj.CountDigits(data);
        System.out.println("Number of digis are : "+iRet);

        iRet = strobj.CountSpace(data);
        System.out.println("Number of Space are : "+iRet);

        iRet = strobj.CountSpacial(data);
        System.out.println("Number of Spacial are : "+iRet);

    }
}
