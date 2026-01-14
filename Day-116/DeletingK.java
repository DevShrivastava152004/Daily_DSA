class LinkedList
{
    static class Node {
        int data;
        Node next;

        Node(int data)
        {
            this.data = data;
            this.next = null;
        }
    }
    private static Node removeK(Node head, int k)
    {
        if(head == null)
            return head;

        if(k == 1)
        {
            return head.next;
        }
        int cnt = 0;
        Node temp = head;
        Node prev = null;

        while(temp != null)
        {
            cnt++;

            if(cnt == k)
            {
                prev.next = prev.next.next;
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
    // convert array to linked list
    static Node convertArr2LL(int[] arr)
    {
        Node head = new Node(arr[0]);
        Node curr = head;// curr -> current last node

        for(int i = 1;i<arr.length;i++)
        {
            curr.next = new Node(arr[i]);
            curr = curr.next;
        }
        return head;
    }
    public static void main(String[] args) {
        {
            int[] arr = {12,5,6,8};
            Node head = convertArr2LL(arr);

            head = removeK(head, 3);

            printList(head);
        }
    }
}