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
    private node first;
    private int iCount;  
    
    public SinglyLL()
    {
        System.out.println("Inside Constructor : ");
        this.first = null;
        this.iCount = 0;
    }

    public void Display()
    {}

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = null;
    }
    public void InsertLast(int iNo)
    {}

    public void InsertAtPos(int iNo, int iPos)
    {}

    public void DeleteFirst()
    {}

    public void DeleteLast()
    {}

    public void DeleteAtPos(int iPos)
    {}



}
class Program452
{
    public static void main(String A[]) 
    {
        SinglyLL sobj = new  SinglyLL();      
    }
}
