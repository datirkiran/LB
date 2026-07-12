class node
{
    public int data;
    public node next;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }

}
class Program450
{
    public static void main(String A[]) 
    {
        node newn = new node(11);
        
        System.out.println(newn.data);
        System.out.println(newn.next);
    }
}
