 // import java.util.* isliye hata derha hai kyuki uska kuch use hi nhi modern IDEs(intelliJ, VS code) ye sab code analyze karte hai aur unused import automatically hata dete hain code lean rakhne ke liye

 class ListNode {
    int val;
    ListNode next;

    ListNode()
    {
        this.val = 0;
        this.next = null;
    }
    ListNode(int val) {
        this.val = val;
        this.next = null;
    }
    ListNode(int val, ListNode next){
        this.val = val;
        this.next = next;
    }
}
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2)
    {
        ListNode dummy = new ListNode();
        ListNode temp = dummy;
        int carry = 0;
        while(l1 != null || l2 != null || carry != 0)
        {
            int sum = 0;
            if(l1 != null)
            {
                sum += l1.val;
                l1 = l1.next;
            }
            if(l2 != null) 
            {
                sum += l2.val;
                l2 = l2.next;
            }
            sum += carry;
            carry = sum / 10;;

            ListNode node = new ListNode(sum % 10);
            temp.next = node;
            temp = temp.next;
        }
        return dummy.next;
    }
};
public class Add2Numbers {
    static ListNode createList(int[] arr)// ye ek method hai jisme createList method ka naam hai
    // ye method basically array ko linked list me convert karna
    
    { // static isliye likhte hai kyuki fir ye methods objects pe depend nahi karte & directly class ke naam se call ho sakte hain.
        // agar method static na ho toh JVM puchta hai ki kis object pe call karun
        ListNode head = new ListNode(arr[0]);// ListNode ek class hai jo memeory me naya object (node) banata hai
        ListNode temp = head;
        for(int i =1;i<arr.length;i++)
        {
            temp.next = new ListNode(arr[i]);
            temp = temp.next;
        }
        return head;
    }
    static void printList(ListNode head)// is method ka kaam linked list ko print krna hai screeen par aur ye method kuch return nhi krta isliye return type void  hai
    {
        while(head != null)
        {
            System.out.print(head.val);
            if(head.next != null)
                System.out.print("->");
            head = head.next;
        }
        System.out.println();
    }
    // **Remember : Agar method kisi cheez ka result dena chahta hai --> return type kuch hoga
    //  Agar sirf kaam karta hai --> return type void
    public static void main(String[] args) {
        {
            int[] num1 = {2,4,3}; // represents 342
            int[] num2 = {5,6,4};
            ListNode l1 = createList(num1);
            ListNode l2 = createList(num2);

            Solution sol = new Solution();
            ListNode result = sol.addTwoNumbers(l1, l2);
            printList(result); 
        }
    }
}
//time complexity - O(max(m,n))
//Space complexity - O(max(m,n))