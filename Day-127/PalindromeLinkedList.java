 // Node class represents a node in a Linked List
class Node {
    int data; // Data stored in the Node
    Node next; // Pointer to the next node in the list

    Node(int data1, Node next1)//constructor with both data and next as parameters
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = null;
    }
}

//Solution class to check if the linked list in palindrome or not
class Solution {
    // function to reverse a Linked list using the recursive approach
    public Node reverseLinkedList(Node head)
    { 
        // check if the list is empty or has only one node #edge case
        if(head == null || head.next == null)
            return head;
    // recursive step: Reverse the remaining part of the list and get the new Head
    Node newHead = reverseLinkedList(head.next);
    //store the next node in front to reverse the link
    Node front = head.next;

    // Update the next pointer of front to point to the current head
    front.next = head;

    // Set the 'next' pointer of the current head to null the break the original link
    head.next = null;

    return newHead;
}
// function to check if the new linked is palindrome or not
public boolean isPalindrome(Node head) {
    if(head == null || head.next == null)
    {
        return true;
    }
    Node slow = head;
    Node fast = head.next;

    // Traverse the linked list to find the middle using slow and fast pointers
    while(fast.next != null && fast.next.next != null)
    {
        slow = slow.next;
        fast = fast.next.next;
    }
    // Reverse the second half of the linked list starting from the middle
    Node newHead = reverseLinkedList(slow.next);
    Node first = head;
    Node second = newHead;
    // Compare data values of node from both halves
    while(second != null) 
    {
        if(first.data != second.data)
        {
            reverseLinkedList(newHead);
            return false;
        }
        first = first.next; // Move the first pointer
        second = second.next; // Move the second pointer
    }
    reverseLinkedList(newHead);
    return true;
}
}
public class PalindromeLinkedList {
    public static void main(String[] args)
    {
        Node head = new Node(1);
        head.next = new Node(5);
        head.next.next = new Node(2);
        head.next.next.next = new Node(2);
        head.next.next.next.next = new Node(1);

        System.out.print("Original Linked List - ");
        printLinkedList(head);

        Solution solution = new Solution();
        if(solution.isPalindrome(head)) {
            System.out.println("Palindrome");
        }
        else{
            System.out.println("The linked list is not a palindrome");
        }
        }
        public static void printLinkedList(Node head) {
            Node temp = head;
            while(temp != null)
            {
                System.out.print(temp.data + " ");
                temp = temp.next;
            }
            System.out.println();
        }
    }

