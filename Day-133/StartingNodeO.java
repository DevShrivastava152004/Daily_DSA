class ListNode {
    int data;
    ListNode next;

    ListNode(int data)
    {
        this.data = data;
        this.next = null;
    }
    ListNode(int data, ListNode next)
    {
        this.data = data;
        this.next = next;
    }
}
class Solution {
    public ListNode detectCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;

        while(fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;
            if(slow == fast)
            {
                slow = head;
                while(slow != fast)
                {
                    slow=slow.next;
                    fast = fast.next;
                }
                return slow;
            }
        }
        return null;
    }
}
public class StartingNodeO {
    public static void main(String[] args) {
        ListNode head = new ListNode(3);
        head.next = new ListNode(2);
        head.next.next = new ListNode(0);
        head.next.next.next = new ListNode(-4);
        head.next.next.next.next = head.next;
        Solution obj = new Solution();
        ListNode result = obj.detectCycle(head);

        if(result != null)
            System.out.println("Cycle starts at node with value : " + result.data);
        else
            System.out.println("No Cycle found");
    } 
}
// This is the classic Tortoise and Hare algorithm and the optimal appraoch for this problem
// The TC --> O(n) where N is the number of nodes in the linked list 
// and the SC --> O(1) cause no additional data structures are used, only two pointers