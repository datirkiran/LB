import java.io.*;
import java.util.*;

public class Program672
{
    public static void main(String A[])
    {
        String Fname = null;
        File fobj = null;
        FileOutputStream foobj = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name : ");
        Fname = sobj.nextLine();

        fobj = new File(Fname);
        foobj = new FileOutputStream(fobj);

        String Data = "Marvellous Infosystems";

        if(fobj.exists())
        {
            foobj.write(Data);   // Error
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}
