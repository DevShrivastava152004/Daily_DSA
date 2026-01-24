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
    public ListNode reverseList(ListNode head)
    {
        ListNode prev = null;
        ListNode temp = head;//to start from the head of the list
        // Traverse the list
        while(temp != null)
        {
            ListNode front = temp.next; // saving the next node
            temp.next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
}
public class ReverseList {
    public static void main(String[] args) {
        ListNode head = new ListNode(1);
        head.next = new ListNode(2);
        head.next.next = new ListNode(3);
        head.next.next.next = new ListNode(4);
        head.next.next.next.next = new ListNode(5);

        Solution sol = new Solution();

        ListNode newHead = sol.reverseList(head);

        while(newHead != null)
        {
            System.out.print(newHead.val + " ");
            newHead = newHead.next;
        }
        System.out.println();
    }
}
// the time complexity is O(N) because we are traversing each node of the linked list exactly once
// and the space complexity is O(1) because we are not using any additional data structure or recursion.