class Node {
    int data;
    Node next;
    Node back;

    Node(int data1, Node next1, Node back1)
    {
        this.data = data1;
        this.next = next1;
        this.back = back1;
    }
    Node(int data1)
    {
        this.data = data1;
        this.next = null;
        this.back = null;
    }
};
public class RemoveKthNodeInDLL {
    public static void print(Node head) 
    {
        while(head != null)
        {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }
    public static Node convertArr2DLL(int[] arr)
    {
        Node head = new Node(arr[0]);
        Node prev = head;
        for(int i=1;i<arr.length;i++)
        {
            Node temp = new Node(arr[i], null , prev);
            prev.next = temp;
            prev = temp;
        }
        return head;
    }
    private static Node deleteKth(Node head, int k)
    {
        if(head == null)
        {
            return null;
        }
        if(k == 1)
        {
            Node newHead = head.next;
            if(newHead != null)
            {
                newHead.back = null;
            }
            head.next = null;
            return newHead;
        }
        Node temp = head;
        int count = 1;
        while( temp != null && count<k)
        {
            temp = temp.next;
            count++;
        }
        if(temp == null)
        {
            return head;
        }
        Node prev = temp.back;
        Node front = temp.next;
        if(front == null)
        {
            prev.next = null;
            temp.back = null;
        }
        else{
            prev.next = front;
            front.back = prev;
            temp.next = null;
            temp.back = null;
        }
        return head;
    }

    public static void main(String[] args) {
        int[] arr ={12,5,6,8};
        Node head = convertArr2DLL(arr);
        head = deleteKth(head, 3);
        print(head);
    }
    
}
