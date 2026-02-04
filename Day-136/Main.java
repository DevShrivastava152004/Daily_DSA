class Node {
    int data;
    Node next, prev;

    Node(int x) {
        this.data = x;
        this.next = null;
        this.prev = null;
    }
}

class Solution {
    Node removeDuplicates(Node head) {

        if (head == null || head.next == null)
            return head;

        Node temp = head;

        while (temp != null && temp.next != null) {

            Node nextNode = temp.next;

            // Skip all duplicate nodes
            while (nextNode != null && nextNode.data == temp.data) {
                nextNode = nextNode.next;
            }

            temp.next = nextNode;

            if (nextNode != null) {
                nextNode.prev = temp;
            }

            temp = temp.next;
        }

        return head;
    }
}

public class Main {
    public static void main(String[] args) {

        // Create DLL: 1 <-> 1 <-> 2 <-> 2 <-> 3 <-> 4 <-> 4
        Node head = new Node(1);
        head.next = new Node(1);
        head.next.prev = head;

        head.next.next = new Node(2);
        head.next.next.prev = head.next;

        head.next.next.next = new Node(2);
        head.next.next.next.prev = head.next.next;

        head.next.next.next.next = new Node(3);
        head.next.next.next.next.prev = head.next.next.next;

        head.next.next.next.next.next = new Node(4);
        head.next.next.next.next.next.prev = head.next.next.next.next;

        head.next.next.next.next.next.next = new Node(4);
        head.next.next.next.next.next.next.prev = head.next.next.next.next.next;

        Solution sol = new Solution();
        head = sol.removeDuplicates(head);

        // Forward print ONLY
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }
}
