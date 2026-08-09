import java.io.*;
public class Program660
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
                System.out.println("File is already present");
            }
            else
            {
                fobj.createNewFile();
                System.out.println("File gets successfully created");
            }
        }
        catch(IOException iobj)
        {
            System.out.println(iobj);
        }
        catch (Exception eobj) 
        {
            System.out.println(eobj);  
        }
    }
}
