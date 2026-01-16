public class DLLInsertBeforeTail {
    public static void print(Node head)
    {
        Node temp = head;
        while(temp != null)
        {
            System.out.print(temp.data  + " ");
            temp = temp.next;
        }
        System.out.println();
    }
    public static Node convertArr2DLL(int[] arr)
    {
        if(arr.length == 0)
            return null;

        Node head = new Node(arr[0]);
        Node prev = head;

        for(int i =1;i<arr.length;i++)
        {
            Node curr = new Node(arr[i]);
            curr.back = prev;
            prev.next = curr;
            prev = curr;
        }
        return head;
    }
    public static Node insertBeforeTail(Node head,int val)
    {
        if(head == null)
        {
            return new Node(val);
        }
        if(head.next == null)
        {
            Node newNode = new Node(val);
            newNode.next = head;
            head.back = newNode;
            return newNode;
        }
        Node tail = head;
        while(tail.next != null)
        {
            tail = tail.next;
        }
        Node prev = tail.back;
        Node newNode = new Node(val);

        newNode.next = tail;
        newNode.back = prev;
        prev.next = newNode;
        tail.back = newNode;

        return head;
    }
    public static void main(String[] args) {
       int[] arr = {12,5,6,8};
       Node head = convertArr2DLL(arr);
       print(head);

        head = insertBeforeTail(head, 99);
        print(head); 
    }
}
