import java.io.*;
import java.util.*;
public class Program668
{
    public static void main(String A[])
    {
        FileReader frobj = null;
        int iRet = 0;
        try
        {
            frobj = new FileReader("Demo.txt");

            while ((iRet = frobj.read()) != -1) 
                {
                    System.out.print((char)iRet);
                }
        }
        catch(IOException iobj)
        {
            System.out.println(iobj);
        }
        finally
        {
            
        }
    }
}
