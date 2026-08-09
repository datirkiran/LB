class Program700
{
    public static void main(String A[]) 
    {
        String header = "marvellousS";  

        System.out.println(header.length());

        header.replaceAll("l", "L"); // Issue

        System.out.println(header.length());
    }  
}
