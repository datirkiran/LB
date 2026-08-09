import java.io.*;
import java.util.*;
public class Program666
{
    public static void main(String A[])
    {
        FileReader frobj = null;
        try
        {
            frobj = new FileReader("Demo.txt");

            System.out.println(frobj.read());
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
