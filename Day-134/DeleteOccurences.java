class ListNode {
    int data;
    ListNode next;
    ListNode prev;

    ListNode(int data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }
}

class Solution {

    public ListNode deleteOccurrencesInDLL(ListNode head, int key) {

        if (head == null) return null;

        ListNode temp = head;

        while (temp != null) {

            ListNode nextNode = temp.next;

            if (temp.data == key) {

                // If node to delete is head
                if (temp == head) {
                    head = head.next;
                    if (head != null)
                        head.prev = null;
                } 
                else {
                    ListNode prevNode = temp.prev;

                    if (prevNode != null)
                        prevNode.next = nextNode;

                    if (nextNode != null)
                        nextNode.prev = prevNode;
                }
            }

            temp = nextNode; // always move forward
        }

        return head;
    }
}

public class DeleteOccurences {

    // Utility method to print DLL
    public static void printList(ListNode head) {
        ListNode temp = head;
        while (temp != null) {
            System.out.print(temp.data + " <-> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {

        // Creating DLL: 1 <-> 2 <-> 3 <-> 2 <-> 4
        ListNode head = new ListNode(1);
        ListNode n2 = new ListNode(2);
        ListNode n3 = new ListNode(3);
        ListNode n4 = new ListNode(2);
        ListNode n5 = new ListNode(4);

        head.next = n2;
        n2.prev = head;

        n2.next = n3;
        n3.prev = n2;

        n3.next = n4;
        n4.prev = n3;

        n4.next = n5;
        n5.prev = n4;

        System.out.println("Before Deletion:");
        printList(head);

        Solution sol = new Solution();
        head = sol.deleteOccurrencesInDLL(head, 2);

        System.out.println("After Deleting 2:");
        printList(head);
    }
}
