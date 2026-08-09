import java.io.*;
import java.util.*;

public class Program684
{
    public static void main(String A[]) throws Exception
    {
        String FnameSrc = null;
        String FnameDest = null;

        int iRet = 0;
        File fobjsrc = null;
        File fobjdest = null;

        FileInputStream fiobj = null;
        FileOutputStream foobj = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the source file name : ");
        FnameSrc = sobj.nextLine();

        System.out.println("Enter the destination file name : ");
        FnameDest = sobj.nextLine();


        fobjsrc = new File(FnameSrc);
        fobjdest = new File(FnameDest);

        fiobj = new FileInputStream(fobjsrc);

        foobj = new FileOutputStream(fobjdest);
        
        fobjdest.createNewFile();

        byte Buffer[] = new byte[100];

        if(fobjsrc.exists())
        {
            String str = null;

            while((iRet = fiobj.read(Buffer)) != -1)
            {
                foobj.write(Buffer, 0, iRet);
            }

            fiobj.close();
            foobj.close();

        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}
