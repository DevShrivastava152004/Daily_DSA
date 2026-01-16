class Node {
    int data;
    Node next;
    Node back;

Node(int data)
{
    this.data = data;
}
}
public class DLLInsertBeforeHead {

    // DLL print karne ke liye
    public static void print(Node head) {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    // array ko DLL me convert karne ke liye
    public static Node convertArr2DLL(int[] arr) {
        if (arr.length == 0) return null;

        Node head = new Node(arr[0]);
        Node prev = head;

        for (int i = 1; i < arr.length; i++) {
            Node curr = new Node(arr[i]);
            curr.back = prev;
            prev.next = curr;
            prev = curr;
        }
        return head;
    }
private static Node insertBeforeHead(Node head, int val)
{// function insert krne ke liye new value ko as a Head
    Node newHead = new Node(val);
    newHead.next = head;

    if(head != null)
        head.back = newHead;

    return newHead;
}
public static void main(String[] args) {
    int[] arr =  {12,5,6,8};

    Node head = convertArr2DLL(arr);
    print(head);
    
    head = insertBeforeHead(head,10);
    print(head);
}
}