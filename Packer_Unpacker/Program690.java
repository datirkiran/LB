import java.io.*;
import java.util.*;

public class Program690
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String FolderName = null;
        String PackedFileName = null;

        System.out.println("Enter Folder Name : ");
        FolderName = sobj.nextLine();

        System.out.println("Enter the Name of Packed File: ");
        PackedFileName = sobj.nextLine();


        File fobjfolder = new File(FolderName);

        if((fobjfolder.exists()) && (fobjfolder.isDirectory()))
        {
            System.out.println("Folder is exists");

            File fobjpack = new File(PackedFileName);
            fobjpack.createNewFile(); // Packed file gets created
            
            File FArr[] = fobjfolder.listFiles();
            System.out.println("Number of files are : "+FArr.length);
            
            for(int i = 0; i < FArr.length; i++)
            {
                // Logic
            }
        }
        else
        {
            System.out.println("Folder is not exists");
        }
    }
}
