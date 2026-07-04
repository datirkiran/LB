import java.util.*;

class StringX 
{
    public void Display(String str)
    {
        System.out.println("Received string are : "+str);
        
    }

}

class Program268 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;
        StringX strobj = new StringX();

        System.out. println("Enter String : ");
        str = sobj.nextLine();

        strobj.Display(str);

    }
}
