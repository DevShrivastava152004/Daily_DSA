class ListNode {
    int val;
    ListNode next;
        ListNode(int val)
        {
        this.val = val;
        this.next = null;
    }
        ListNode(int val, ListNode next)
    {
        this.val = val;
        this.next = next;
    }
}
class Solution {
    public static ListNode reverseLinkedList(ListNode head)
    {
        if(head == null || head.next == null)
        {
            return head;
        }
        ListNode newHead = reverseLinkedList(head.next);
        ListNode front = head.next;
        front.next = head;
        head.next = null;
        return newHead; 
    }
}
public class ReverseListRecursiveMethod {

    public static void main(String[] args) 
        {
            ListNode head = new ListNode(1);
            head.next = new ListNode(2);
            head.next.next = new ListNode(3);
            head.next.next.next = new ListNode(4);
            head.next.next.next.next = new ListNode(5);

            Solution sol = new Solution();
            ListNode reversed = sol.reverseLinkedList(head);

            while(reversed != null)
            {
                System.out.print(reversed.val + " ");
                reversed = reversed.next;
            }
            System.out.println();
        }
    }
