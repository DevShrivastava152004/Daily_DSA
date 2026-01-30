class Node {
    int data;
    Node next;

    Node(int data,Node next)// aise constructor jo node banate waqt value bhi leta hai aur ye bhi btata hai ki iske baad ka node kaunsa hoga
    {
        this.data=data;
        this.next=next;
    }
    Node(int data) // aise constructor jo node banate waqt value bas leta hai
    {
        this.data=data;
        this.next=null;
    }
}
    public class MiddleNodeOptimal
    {
        static Node findMiddle(Node head) // ye method hai jo kisi object ka data use nahi krta sirf jo head diya hai usi pe kaam karta hai kuch yaad nahi rakhta
       // static ka mtlv basically is kaam ke liye kisi object ki jarurat nahi   
         {
            Node slow = head;
            Node fast = head;

            while(fast != null &&  fast.next != null && slow != null)
            {
                slow = slow.next;
                fast = fast.next.next;
            }
            return slow;//this slow pointer is now at the middle of the node
         }
         public static void main(String[] args) { // Java ko btana ki program yhin se start krow
            Node head = new Node(1);
            head.next = new Node(2);
            head.next.next = new Node(3);
            head.next.next.next = new Node(4);
            head.next.next.next.next = new Node(5);

            Node middleNode = findMiddle(head);
            System.err.println("The middle node value is - " + middleNode.data);
        }
    }
// This is the optimal approach of this problem with TC-O(N/2) and SC-0(1)
         