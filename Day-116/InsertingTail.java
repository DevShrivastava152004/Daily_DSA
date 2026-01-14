class LinkedList {
    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }
    private static Node insertAtTail(Node head, int value)
    {
        Node newNode = new Node(value);
        if(head == null)
        {
            return newNode;
        }
        Node temp = head;
        while(temp.next != null)
        {
            temp = temp.next;
        }
        temp.next = newNode;
        return head;
    }
    static void printList(Node head)
    {
        while(head != null)
        {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }
    static Node convertArr2LL(int[] arr)
    {
        Node head = new Node(arr[0]);
        Node curr = head;
        for(int i=1;i<arr.length;i++)
        {
            curr.next = new Node(arr[i]);
            curr = curr.next;
        }
        return head;
    }
    public static void main(String[] args) {
        
            int[] arr = {10,20,30};
            Node head = convertArr2LL(arr);
            head = insertAtTail(head,40);
            printList(head);
        }
    }

