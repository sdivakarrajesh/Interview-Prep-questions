import java.util.*;

class Solution {

    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }

    }

    static Node reverseLinkedList(Node head){
        Node originalHead = head;
        Node current = head;
        Node prev=null;
        Node next=null;

        while(current!=null){
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }

    static void printLinkedList(Node head){
        while(head!=null){
            System.out.print(head.data+" ");
            head = head.next;
        }
    }

    static Node addOneUtil(Node head){
        int carry = 1,sum = 0;
        Node originalHead = head;
        Node temp=null; // temp to hold last node to extend the list Ex: in 99 -> 100
        while(head!=null){
            sum = carry + head.data;
            carry = sum>=10?1:0;
            head.data = sum%10;
            temp = head;
            head = head.next;
        }
        if(carry!=0){
            temp.next = new Node(1);
        }
        return originalHead;
    }

    static void addOneToLinkedList(Node head){
        System.out.println("Original..");
        printLinkedList(head);
        head = reverseLinkedList(head);
        addOneUtil(head);
        System.out.println("Final Answer..");
        head = reverseLinkedList(head);
        printLinkedList(head);
    }

    public static void main(String[] args) {
        System.out.println("Starting");
        Node head = new Node(9);
        head.next = new Node(4);
        head.next.next = new Node(9);
        head.next.next.next = new Node(9);
        addOneToLinkedList(head);

    }

}
