// Create a Node class representing a single digit in the linked list
class Node {
    int data;
    Node next;
    
    Node(int value)
    {
        data = value;
        next = null;
    }
}
class LinkedList {
    Node append(Node head, int value)
    {
        Node newNode = new Node(value);
        if(head == null)
        {
            return newNode;
        }
        Node current = head;
        while(current.next != null)
            current = current.next;
        current.next = newNode;
        return head;
    }
    void printList(Node head)
    {
        Node current = head;
        while(current != null)
        {
            System.out.print(current.data);
            current = current.next;
        }
        System.out.println();
    }
}
class Solution {
    Node reverseList(Node node)
    {
        Node prev = null;
        Node current = node;

        while(current != null)
        {
            Node nextNode = current.next;
            current.next = prev;
            prev = current;
            current = nextNode;
        }
        return prev;
    }
    Node addOne(Node head)
    {
        head = reverseList(head);
        Node current = head;
        int carry = 1;

        // Traverse the list and add carry
        while(current != null && carry > 0)
        {
            int sum = current.data + carry;
            current.data = sum % 10;
            carry = sum / 10;

            //If there's no next node and we still have a carry, append a new Node
            if(current.next == null && carry>0)
            {
                current.next  = new Node(carry);
                carry = 0;
            }
            current= current.next;
        }
        // Reverse the list back to restore the original order
        head = reverseList(head);
        return head;
    }
}
public class AddOnetoLLIterative{
    public static void main(String[] args) {
        {
            Node head = null;
            LinkedList ll = new LinkedList();
            Solution sol = new Solution();
            head = ll.append(head , 1);
            head = ll.append(head,2);
            head = ll.append(head,9);

            System.out.print("Original Number: ");
            ll.printList(head);

            head = sol.addOne(head);

            System.out.print("After adding one: ");
            ll.printList(head);
        }
    }
}