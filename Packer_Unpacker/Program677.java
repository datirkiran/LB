import java.io.*;
import java.util.*;

public class Program677
{
    public static void main(String A[]) throws Exception
    {
        String Fname = null;
        File fobj = null;
        FileInputStream fiobj = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name : ");
        Fname = sobj.nextLine();

        fobj = new File(Fname);

        fiobj = new FileInputStream(fobj);

        byte Arr[] = new byte[50];

        if(fobj.exists())
        {
            fiobj.read(Arr); 
            System.out.println(Arr);  
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}
