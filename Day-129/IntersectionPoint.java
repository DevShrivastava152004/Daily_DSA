class Node {
    int num;
    Node next;

    Node(int val)
    {
        num = val;
        next = null;
    }
}
class  Solution {
    public void insertNode(Node head, int val)
    {
        Node newNode = new Node(val);
        if(head == null)
        {
            head = newNode;
            return;
        }
        Node temp = head;
        while(temp.next != null)
        {
            temp = temp.next;
        }
        temp.next = newNode;
    }
    // utility function to check presence of intersection
    public Node intersectionPresent(Node head1, Node head2)
    {
        Node d1 = head1;
        Node d2 = head2;

        //traverse both the list, when one  reaches the end,redirect it to the head of the other list
        while(d1 != d2)
        {
            if(d1 == null)
            {
                d1 = head2;
            } else {
                d1 = d1.next;
            }
            if(d2 ==  null)
            {
                d2 = head1;
            }
            else {
                d2 = d2.next;
            }
        }
        return d1; // If they meet, return the intersection node, otherwise null
    }
    public void printList(Node head)
    {
        while(head != null && head.next != null) {
            System.out.print(head.num + "->");
            head = head.next;
        }
        if(head != null)
        {
            System.out.print(head.num);
        }
        System.out.println();
    }
}
public class IntersectionPoint {
    public static void main(String[] args) {
        Solution sol = new Solution();

        Node head = new Node(1);
        sol.insertNode(head, 3);
        sol.insertNode(head , 1);
        sol.insertNode(head, 2);
        sol.insertNode(head,4);
        Node head1 = head;
        head = head.next.next.next;// Road A ke beech ka ek point choose karo jahan se road B ko jod sakein
        Node headSec = new Node(3);//Road B ko road A ke beech me merge kar do
        Node head2 = headSec;
        headSec.next = head;

        System.out.print("List1: ");
        sol.printList(head1);
        System.out.print("List2: ");
        sol.printList(head2);

        Node answerNode = sol.intersectionPresent(head1, head2);
        if( answerNode == null)
        {
           System.out.println("No Intersection"); 
        }
        else {
            System.out.println("The intersection point is " + answerNode.num);
        }
    }
}
// TC - O(2*max(length of list1, length of list2))
//SC - O(1) - no extra space needed
