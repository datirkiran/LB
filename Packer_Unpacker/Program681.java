import java.io.*;
import java.util.*;

public class Program681
{
    public static void main(String A[]) throws Exception
    {
        String Fname = null;
        int iRet = 0;
        File fobj = null;
        FileInputStream fiobj = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name : ");
        Fname = sobj.nextLine();

        fobj = new File(Fname);

        fiobj = new FileInputStream(fobj);

        byte Buffer[] = new byte[50];

        if(fobj.exists())
        {
            String str = null;

            while((iRet = fiobj.read(Buffer)) != -1)
            {
                str = new String(Buffer);
                System.out.println(str);
                str = null;
            }
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}
