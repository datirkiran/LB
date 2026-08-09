import java.io.*;
public class Program658
{
    public static void main(String A[]) 
    {
        try
        {
            File fobj = new File("Demo.txt");

            if(fobj.exists())
            {
                System.out.println("File is already present");
            }
            else
            {
                fobj.createNewFile();
                System.out.println("File is created successfully");
            }
        }
        catch(IOException iobj)
        {
            System.out.println(iobj);
        }
        catch (Exception eobj) 
        {
            System.out.println(eobj);  
        }
    }
}
