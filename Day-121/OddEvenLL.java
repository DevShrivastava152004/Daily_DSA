class ListNode {//constructor call ke liye kyuki object create hota hai toh usko value dene ka kaam constructor krta hai toh isliye pehle usko initialize krdiye
    int val;
    ListNode next;

    ListNode(int val) {
        this.val = val;
        this.next = null;
    }
    ListNode(int val,ListNode next)
    {
        this.val = val;
        this.next = next;
    }
}

class Solution {
    public ListNode oddEvenList(ListNode head)
    {
        if(head == null)
            return head;
        ListNode prev = head,curr=head.next;
        ListNode head2 = curr;
        int  i=0;
        while(curr != null && curr.next != null)
        {
            i++;
            prev.next = curr.next;
            prev=curr;
            curr=curr.next;
        }
        if(i%2==1)
        {
            curr.next = head2;
            prev.next=null;
        }
        else{
        prev.next=head2;
        }

        return head;


    }

}
public class OddEvenLL {
    public static void main(String[] args) {
        
            ListNode head = new ListNode(1);
            head.next = new ListNode(2);
            head.next.next = new ListNode(3);
            head.next.next.next = new ListNode(4);
            head.next.next.next.next = new ListNode(5);
            head.next.next.next.next.next = new ListNode(6);
            head.next.next.next.next.next.next = new ListNode(7);

            Solution sol = new Solution();
            ListNode result = sol.oddEvenList(head);
            
                while(result != null)
                {
                    System.out.print(result.val + " ");
                    result = result.next;
                }
            }
        }