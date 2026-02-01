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
    public int LengthLoop(Node head)
    {
        Node slow = head;
        Node fast = head;

        while(fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;

            if(slow == fast)
            {
                return countLoopLength(slow);
            }
        }
        return 0;
    }
    public int countLoopLength(Node meetingPoint)
    {
    Node temp = meetingPoint;
    int length = 1;
    while(temp.next  != meetingPoint) {
        temp = temp.next;
        length++;
    }
    return length;
}
}
public class LengthOfLoopO {
    public static void main(String[] args) {
        Node head = new Node(1);
        Node second = new Node(2);
        Node third = new Node(3);
        Node fourth = new Node(4);
        Node fifth = new Node(5);
        head.next = second;
        second.next = third;
        third.next = fourth;
        fourth.next = fifth;
        fifth.next = second;

        Solution obj = new Solution();
        int loopLength = obj.LengthLoop(head);
        if(loopLength > 0) 
        {
            System.out.println("Length of the loop -  " + loopLength);
        }
            else
            {
                System.err.println("No loop found in the Linked List");
                }
    }
    
}
// The TC-O(N) as we traverset he entire linked list atleast once to find the lenth of the loop.
// And the SC-O(1) as we use a constant amount of additional space