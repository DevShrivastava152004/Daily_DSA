public class DLL
{
    Node head;

    public void insertFirst(int val)
    {
        Node node = new Node(val); // Create a new node to insert the value
        

    }



    private class Node {
        int val;
        Node next;
        Node prev;

        public Node(int val)
        {
            this.val = val;
        }

        public Node(int val, Node next, Node prev)
        {
            this.val = val;
            this.next = next;
            this.prev = prev;
        }
    }
}