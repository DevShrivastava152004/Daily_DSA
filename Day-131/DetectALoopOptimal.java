class Node {
    int data;
    Node next;

    Node(int data, Node next)
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
    public boolean DetectLoop(Node head)
    {
        Node slow = head;
        Node fast = head;
        while(fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;
            if(slow == fast)
                return true;
        }
        return false;
    }     
}
public class DetectALoopOptimal
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
        fifth.next = third;// to create a loop

        Solution sol = new Solution();
        if(sol.DetectLoop(head))
        {
            System.out.println("Loop detected");
         }
         else
             {
                System.out.println("Loop not detected");

            }
        }
    }

