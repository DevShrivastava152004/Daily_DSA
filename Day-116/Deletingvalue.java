class LinkedList {
    static class Node {
        int data;
        Node next;
        Node(int data)
        {
            this.data = data;
            this.next = null;
        }
    }
    private static Node deleteByValue(Node head, int value)
    {
        if(head == null)
        {
            return head;
        }
        if(head.data == value)
        {
            return head.next;
        }
        Node temp = head;
        Node prev = null;
         while(temp != null)
         {
            if(temp.data == value)
            {
                prev.next = temp.next;
                break;
            }
            prev = temp;
            temp = temp.next;
         }
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
            curr= curr.next;
        }
        return head;
    }
    public static void main(String[] args) {
        {
            int[] arr = {10,20,30,40};
            Node head = convertArr2LL(arr);
            head = deleteByValue(head, 30);
            printList(head);
        }
    }
}