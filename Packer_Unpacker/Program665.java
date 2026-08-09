import java.io.*;
import java.util.*;
public class Program665
{
    public static void main(String A[])
    {
        FileWriter fwobj = null;
        try
        {
            fwobj = new FileWriter("Demo.txt");
            fwobj.write("Jay Ganesh...");
            fwobj.close();  // Important to close the file after writing to it
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
