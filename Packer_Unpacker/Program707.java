import java.util.*;

class Program707
{
    public static void main(String A[]) 
     {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        System.out.println("String is : "+str+"having length : "+str.length());

        str = str.trim();

        System.out.println("String is : "+str+"having length : "+str.length());

        str = str.replaceAll(" ", "");
        System.out.println("String is : "+str+"having length : "+str.length());
     }
}
