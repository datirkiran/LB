import java.io.*;
import java.util.*;

public class Program671
{
    public static void main(String A[])
    {
        String Fname = null;
        File fobj = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name : ");
        Fname = sobj.nextLine();

        fobj = new File(Fname);

        if(fobj.exists())
        {
            System.out.println("File name is : "+fobj.getName());
            System.out.println("Absolute path is : "+fobj.getAbsolutePath());
            System.out.println("File size is : "+fobj.length());
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}
