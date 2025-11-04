import java.util.*; // for List and Arrays.asList

class Node {
    public int data;
    public Node next;

    public Node(int data1, Node next1) {
        data = data1;
        next = next1;
    }

    public Node(int data1) {
        data = data1;
        next = null;
    }
}

public class LinkedList1 {

    // Function to print Linked List
    public static void printLL(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
    }

    // Function to insert new node at head
    public static Node insertHead(Node head, int val) {//inserthead and printLL pe error isliye dikha rha hai bhai kyuki extra braces dalne ki wajah se compiler un menthods ko scope ke bahar samajh rha hai , isliye error aa rha hai and ye logical error nahi hai bhai toh koi dikkat ni code properly work kr rha hai
        Node temp = new Node(val, head);
        return temp;
    }

    // Main method (program starts here)
    public static void main(String[] args) {

        List<Integer> arr = Arrays.asList(12, 8, 5, 7);
        int val = 100;

        // Creating linked list manually
        Node head = new Node(arr.get(0));
        head.next = new Node(arr.get(1));
        head.next.next = new Node(arr.get(2));
        head.next.next.next = new Node(arr.get(3));

        // Insert at head
        head = insertHead(head, val);

        // Print the linked list
        printLL(head);
    }
}
