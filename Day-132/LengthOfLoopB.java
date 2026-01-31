import java.util.*;
class Node {
    int data;
    Node next;

   
    Node(int data)
    {
        this.data = data;
        this.next = null;
    }
    Node(int data, Node next){
        this.data = data;
        this.next = next;
    }
}
class Solution {
    public int LengthLoop(Node head) {
        HashMap<Node, Integer> visitedNodes = new HashMap<>();
        Node temp = head;
        int timer = 0;
        while(temp != null) {
            if(visitedNodes.containsKey(temp)) {
                int loopLength = timer - visitedNodes.get(temp);
                return loopLength;
            }
            visitedNodes.put(temp, timer);
            temp = temp.next;
            timer++;
        }
        return 0;
    }
}
public class LengthOfLoopB{
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
        Solution sol = new Solution();
        int loopLength = sol.LengthLoop(head);

        if(loopLength > 0 ) {
            System.out.println("length of the loop = " + loopLength);
        }
        else {
            System.out.println("No loop found in the linked list");
        }
        }
        
    }
// the TC - O(N) and the SC - O(N)
