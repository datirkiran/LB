import java.io.*;
import java.util.*;
public class Program664
{
    public static void main(String A[]) throws IOException
    {
        FileWriter fwobj = new FileWriter("Demo.txt");

        fwobj.write("Jay Ganesh...");

        fwobj.close();  // Important to close the file after writing to it
    }
}
