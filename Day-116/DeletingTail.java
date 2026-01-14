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
    Node head;

    void insert(int data)
    {
        Node newNode = new Node(data);

        if(head == null)
        {
            head = newNode;
            return;
        }
        Node temp = head;
        while (temp.next != null)
        {
            temp = temp.next;
        }
        temp.next = newNode;
    }
    void deleteTail()
    {
        if(head == null)
        {
            System.out.println("List is empty. Nothing to delete. ");
            return;
        }
        if(head.next == null)
        {
            head = null;
            return;
        }

        Node temp = head;

        while(temp.next.next != null)
        {
            temp = temp.next;
        }

        temp.next = null;

    }
    void printList()
    {
        Node temp = head;
        while (temp != null)
        {
            System.out.print(temp.data + "->");
            temp = temp.next;
        }
        System.out.println("null");
    }
    public static void main(String[] args) 
        {
            LinkedList list = new LinkedList();

            list.insert(10);
            list.insert(20);
            list.insert(30);

            System.out.print("Original List: ");
            list.printList();

            list.deleteTail();

            System.out.print("Original List: ");
            list.printList();
        }
    }
