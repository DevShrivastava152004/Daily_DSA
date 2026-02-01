class Node {
    int data;
    Node next;

    Node(int data)
    {
        this.data = data;
        this.next = null;
    }
    Node(int data, Node next)
    {
        this.data = data;
        this.next = next;
    }
}
class Solution {
    public Node deleteMiddle(Node head)
    {
      if(head == null || head.next == null)
      {
        return null;  
    }
    Node slow = head;
    Node fast = head.next.next;

    while(fast != null && fast.next != null)
    {
        slow = slow.next;
        fast = fast.next.next;
    }
    slow.next = slow.next.next;
    return head;
}
}

public class DeleteMiddleNodeO {
    public static void printLL(Node head)
    {
        Node temp = head;
        while(temp != null)
        {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }
    public static void main(String[] args)
    {
        Node head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(3);
        head.next.next.next = new Node(4);
        head.next.next.next.next = new Node(5);
        head.next.next.next.next.next = new Node(6);

        System.out.println("Original Linked List");
        printLL(head);

        Solution obj = new Solution();
        head = obj.deleteMiddle(head);

        System.out.print("Updated Linked List");
        printLL(head);
    }
}
