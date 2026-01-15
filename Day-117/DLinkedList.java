//  Converting array into doubly linked list
class Node {// this is the representation of doubly linked list
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
public class DLinkedList {
    public static void print(Node head)
    {
        while(head != null)
        {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }
    private static Node convertArr2DLL(int[] arr)
    {
        Node head = new Node(arr[0]);
        Node prev = head;
        for(int i = 1;i< arr.length;i++)
        {
            Node temp = new Node(arr[i], null,prev);
            prev.next = temp;
            prev = temp;
        }
        return head;
    }
    public static void main(String[] args) {
        int[] arr = {12,5,6,8};
        Node head = convertArr2DLL(arr);
        print(head);
    }
}
