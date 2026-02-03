import java.util.*;
class ListNode
{
    int val;
    ListNode next;
    ListNode prev;


ListNode(int val)
{
    this.val = val;
    this.next = null;
    this.prev = null;
}
ListNode(int val, ListNode next, ListNode prev)
{
    this.val = val;
    this.next = next;
    this.prev = prev;
}
}
public class PairsWithGivenSum {

     public static ListNode findTail(ListNode head)
{
    ListNode tail = head;
    while(tail.next != null)
    {
        tail = tail.next;
    }
    return tail;
}
public static ArrayList<int[]> pairSum(ListNode head, int sum)
{
    ArrayList<int[]> result = new ArrayList<>();
    if(head == null)
        return result;
    ListNode left = head;
    ListNode right = findTail(head);

    while( left != null && right != null && left != right && right.next != left)
    {
        int currSum = left.val + right.val;

        if(currSum == sum)
        {
            result.add(new int[]{left.val,right.val});
            left = left.next;
            right = right.prev;
        }
        else if(currSum < sum)
        {
            left=left.next;
        }
        else
             {
            right = right.prev;
        }
    }
    return result;
}

    public static void main(String[] args) {
        ListNode head = new ListNode(1);
        ListNode n2 = new ListNode(2);
        ListNode n3= new ListNode(3);
        ListNode n4 = new ListNode(4);
        ListNode n5 = new ListNode(5);

        head.next = n2;
        n2.prev = head;

        n2.next = n3;
        n3.prev = n2;

        n3.next = n4;
        n4.prev = n3;

        n4.next = n5;
        n5.prev = n4;

        int target = 6;

        ArrayList<int[]> pairs = pairSum(head, target);

        for(int[] pair: pairs){
            System.out.println(pair[0] + " "  + pair[1]);
        }  
    }
}
// This is the optimal appraoch with a Time Complexity of O(n) and SC is O(k)

