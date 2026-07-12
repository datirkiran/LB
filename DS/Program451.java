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
class SinglyLL
{
    public node first;
    public int iCount;  
    
    public SinglyLL()
    {
        System.out.println("Inside Constructor");
        this.first = null;
        this.iCount = 0;
    }

}
class Program451
{
    public static void main(String A[]) 
    {
        SinglyLL sobj = new  SinglyLL();      
    }
}
