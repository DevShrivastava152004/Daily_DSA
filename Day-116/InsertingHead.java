class InsertingHead {
    static class Node {
        int data;
        Node next;
        Node(int data)
        {
            this.data = data;
            this.next = null;
        }
    }
    private static Node insertAtHead(Node head, int value) 
    {
        Node newNode = new Node(value);

        newNode.next = head;
        head = newNode;
        return head;
    }

    static void printList(Node head) {
        while(head != null)  // traverse till end
        {
            System.out.print(head.data + " ");
            head = head.next;  // move to next node
        }
        System.out.println();
    }
    static Node convertArr2LL(int[] arr)
    {
        Node head = new Node(arr[0]);
        Node curr = head;

        for(int i = 1; i <arr.length; i++)
        {
            curr.next = new Node(arr[i]);
            curr = curr.next;
        }
        return head;
    }
    public static void main(String[] args) {
        {
            int[] arr = {20,30,40};
            Node head = convertArr2LL(arr);

            head = insertAtHead(head, 10);

            printList(head);
        }
    }
}