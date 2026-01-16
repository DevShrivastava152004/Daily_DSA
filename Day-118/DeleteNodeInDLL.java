class Node {
    int data;
    Node next;
    Node back;

    Node(int data1)
    {
        this.data = data1;
        this.next = null;
        this.back = null;
}
Node(int data1, Node next1, Node back1)
{
    this.data = data1;
    this.next = next1;
    this.back = back1;
}
};
public class DeleteNodeInDLL {
    public static void print(Node head)
    {
        while(head != null)
        {
            System.out.print(head.data + " " );
            head = head.next;
        }
        System.out.println();
    }
public static Node convertArr2DLL(int [] arr)
{
    Node head = new Node(arr[0]);
    Node prev = head;
    for(int i =1;i<arr.length;i++)
    {
        Node temp = new Node(arr[i]);
        temp.back = prev;
        prev.next = temp;
        prev = temp;
    }
    return head;
}
private static void deleteNode(Node node)
{
    if(node == null)
        return;

    Node prev = node.back;
    Node front = node.next;

    if(prev == null)
    {
        if(front != null)
        {
            front.back = null;
        }
    }
    else if(front == null)
    {
        prev.next = null;
    }
    else{
        prev.next = front;
        front.back = prev;
    }
    node.next = null;
    node.back = null;
}
private static Node insertBeforeHead(Node head,int val)
{
    if(head == null)
    {
        return new Node(val);
    }
    Node newHead = new Node(val,head,null);
    head.back = newHead;
    return newHead;
}
    public static void main(String[] args) {
        int[] arr = {12,5,6,8};
        Node head = convertArr2DLL(arr);
       head = insertBeforeHead(head, 10);
        print(head);
        

    }
}
