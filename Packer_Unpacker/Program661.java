import java.io.*;
public class Program661
{
    public static void main(String A[]) 
    {
        File fobj = null;
        boolean bRet = false;
        
        try
        {
            fobj = new File("Demo.txt");

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
