class Node {
    int data;
    Node next;
    Node back;

    Node(int data1)
    {
        this.data = data1;
        this.next = null;
        this.back = null;
    }
};
public class InsertBeforeNodeInDLL {
    public static void print(Node head)
    {
        while(head != null)
        {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }
    public static Node convertArr2DLL(int[] arr)
    {
        if(arr.length == 0)
            return null;
        Node head = new Node(arr[0]);
        Node prev = head;

        for(int i = 1;i<arr.length;i++)
        {
            Node temp = new Node(arr[i]);
            temp.back = prev;
            prev.next = temp;
            prev = temp;
        }
        return head;
    }
    private static Node insertBeforeNode(Node head, Node node,int val)
    {
        if(node == null)
            return head;
    Node prev = node.back;
    Node newNode = new Node(val);
    newNode.next = node;
    newNode.back = prev;
    if(prev == null)
    {
        node.back = newNode;
        return newNode;
    }
    prev.next = newNode;
    node.back = newNode;

    return head;
    }

    public static void main(String[] args) {
        int[]  arr = {12,5,8,7};
        Node head = convertArr2DLL(arr);
        Node node = head.next.next;
        head = insertBeforeNode(head,node,99);
        print(head);
    }
}
