class Program702
{
    public static void main(String A[]) 
     {
        String header = "    india  is  my  country    ";  

        System.out.println(header);

        header = header.trim(); 

        System.out.println(header);

        header = header.replaceAll("  ", " ");
        System.out.println(header);
    }
}
