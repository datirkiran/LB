import java.io.*;
import java.util.*;

public class Program688
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String FolderName = null;

        System.out.println("Enter Folder Name : ");
        FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            System.out.println("Folder is exists");

            File FArr[] = fobj.listFiles();
            System.out.println("Number of files are : "+FArr.length);
            
            for(int i = 0; i < FArr.length; i++)
            {
                System.out.println(FArr[i].getName());
            }
        }
        else
        {
            System.out.println("Folder is not exists");
        }
    }
}
