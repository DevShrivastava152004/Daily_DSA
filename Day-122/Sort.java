class   ListNode {
    int val;
    ListNode next;

    ListNode (int val)
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
 class Arr2LL {
    static ListNode createList(int[] arr)
    {
        ListNode head = new ListNode(arr[0]);
        ListNode temp = head;
        for(int i = 1;i<arr.length;i++)
        {
            temp.next = new ListNode(arr[i]);
            temp = temp.next;
        }
        return head;
        }
    }
    class Solution {
        static void sortZeroOneTwo(ListNode head)
        {
            int cnt0=0,cnt1=0,cnt2=0;
            ListNode temp = head;
        while(temp != null)
        {
            if(temp.val == 0)
                cnt0++;
            else if(temp.val == 1)
                cnt1++;
            else
                cnt2++;

            temp = temp.next;
        }
         temp = head;
         while(temp != null)
         {
            if(cnt0>0)
            {
                temp.val=0;
                cnt0--;
            }
            else if(cnt1>0)
            {
                temp.val=1;
                cnt1--;
            }
            else
            {
                temp.val = 2;
                cnt2--;
            }
            temp = temp.next;
         }
    }
}
public class Sort {
    public static void main(String[] args)
    {
        int[] arr = {2,0,1,2,1,0};
        //convert array to Linked List 
        ListNode head = Arr2LL.createList(arr);

        // Sort Linked List
        Solution.sortZeroOneTwo(head);

        // Print sorted Linked list
        ListNode temp = head;
        while(temp != null)
        {
            System.out.print(temp.val + " ");
            temp = temp.next;
        }
    }
}