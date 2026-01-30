import java.util.*;
class Node {
    int data;
    Node next;

    Node(int data,Node next)
    {
        this.data = data;
        this.next = next;
    }
    Node(int data)
    {
        this.data = data;
        this.next = null;
    }
}
class Solution {
    public boolean detectLoop(Node head)
    {
        Node temp = head;
        HashMap<Node, Integer> nodeMap = new HashMap<>();
        while(temp != null)
        {
            if(nodeMap.containsKey(temp)) {
                return true;
            }
            nodeMap.put(temp,1);
            temp = temp.next;
        }
        return false;
    }
}
public class DetectALoop
{
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
        fifth.next = third;

        Solution sol = new Solution();

        if(sol.detectLoop(head)){
            System.err.println("Loop detected in the linked list");

        } else {
            System.err.println("No loop detected in the linked list");
        }
    }
}