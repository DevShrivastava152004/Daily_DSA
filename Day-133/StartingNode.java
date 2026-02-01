import java.util.*;
class ListNode {
    int data;
    ListNode next;

     ListNode(int data)
    {
        this.data=data;
        this.next = null;
    }
     ListNode(int data, ListNode next)
     {
        this.data = data;
        this.next = next;
     }
}
class Solution
{
    public ListNode detectCycle(ListNode head)
    {
        Set<ListNode> visited = new HashSet<>();

        while(head != null)
        {
            if(visited.contains(head))
            {
                return head;
            }
            visited.add(head);
            head = head.next;
        }
        return null;

    }
}

public class StartingNode {
    public static void main(String[] args) {
        ListNode head = new ListNode(13);
        head.next = new ListNode(2);
        head.next.next = new ListNode(0);
        head.next.next.next = new ListNode(-4);

        head.next.next.next.next = head.next;
        Solution obj = new Solution();
        ListNode startNode = obj.detectCycle(head);
        if(startNode != null)
            System.out.println("Cycle start AT nODE with value:- " + startNode.data);
        else
            System.out.println("No cycle found.");
    } 
}
// This is the brute force method  to solve this problem which has a time complexity of O(N) and Space Complexity of O(N).
