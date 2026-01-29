class Node {
    int data; // Data stored in the node
    Node next; //Pointer to the next node in the list
    Node(int data , Node next)// Constructor with both data and next node as parameter
    {
        this.data = data;
        this.next = next;
    }
    Node(int data) // Constructor with only data as a parameter, sets next to null
    {
        this.data = data;
        this.next = null;
    }
}
public class MiddleNode {
    static Node findMiddle(Node head)// kyuki ye method kisi object pe depend nhi karta
    {
        if(head == null || head.next == null)
        {
            return head;
        }
        Node temp = head;
        int count = 0;
        while(temp != null)
        {
            count++;
            temp = temp.next;
        }
        int mid = count / 2 + 1;
        temp = head;
        while(temp != null)
        {
            mid = mid - 1;
            if(mid == 0)
                {
                    break;
                }
            temp = temp.next;
        }
        return temp;
    }
    public static void main(String[] args) {
        Node head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(3);
        head.next.next.next = new Node(4);
         head.next.next.next.next = new Node(5);

        // Find the middle node
        Node middleNode = findMiddle(head);

        // Display the value of the middle node
        System.out.println("The middle node value is: " + middleNode.data);
    }
}
// brute force approach where TC-O(N+N/2) and SC-O(1).
