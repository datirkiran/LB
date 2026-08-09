import java.io.*;
import java.util.*;
public class Program662
{
    public static void main(String A[]) 
    {
        File fobj = null;
        boolean bRet = false;
        String FName = null;
        Scanner sobj = null;

        sobj = new Scanner(System.in);

        System.out.println("Enter the file name : ");
        FName = sobj.nextLine();
        
        try
        {
            fobj = new File(FName);

            bRet = fobj.exists();

            if(bRet == true)
            {
                fobj.delete();
                System.out.println("File gets successfully deleted");
            }
            else
            {
                System.out.println("There is no such file");
            } 
        }
        catch (Exception eobj) 
        {
            System.out.println(eobj);  
        }
    }
}
