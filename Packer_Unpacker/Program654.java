import java.io.*;
public class Program654 
{
    public static void main(String A[]) 
    {
        File fobj = new File("Demo.txt");

        fobj.createNewFile(); // Exception
    }
}
