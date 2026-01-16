class Node {
    int data;
    Node next;
    Node back;

    Node(int data)
    {
        this.data = data;
    }
}
public class DLLInsertKthNode {
    public static void print(Node head)
    {}
}
public class InsertkthNode {
    public static void main(String[] args) {
        vector<int> arr = {12,5,8,7};
        Node head = convertArr2DLL(arr);
        head = insertBeforeKthElement(head ,1,10);
        print(head);
        return 0;
    }
    
}
