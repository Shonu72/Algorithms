package dsa_java;
import java.util.Scanner;
public class linkedList_singly {
    Scanner sc = new Scanner(System.in);
//implementation of linkedlist
        private ListNode head;
        private static class ListNode{
            private int data; // generic type
            private ListNode next;

            public ListNode(int data){
            this.data = data;
            this.next = null;
            }
        }

    public void display() {
        ListNode current = head;
        while (current != null){
            System.out.print(current.data + " --> ");
            current = current.next;
        }
        System.out.println("null");
    }

    public int length(){
            if (head == null){
                return 0;
            }
            int count =0;
            ListNode current = head;
            while(current != null){
                count++;
                current = current.next;
            }
            return count;
    }
    public void insertFirst(int value){
            ListNode newNode = new ListNode(value);
            newNode.next = head;
            head = newNode;

    }

    public void insertEnd(int value){
        ListNode newNode = new ListNode(value);
            if (head == null){
                head = newNode;
                return;
            }
            ListNode curr = head;
            while(null != curr.next){
                curr = curr.next;
            }
            curr.next = newNode;
    }

    public void insertPosition(int position , int value){
            ListNode node = new ListNode(value);
            if (position == 1){
                node.next = head;
                head = node;
            }else {
                ListNode prev = head;
                int count = 1;
                while (count < position - 1) {
                    prev = prev.next;
                    count++;
                }
                ListNode current = prev.next;
                prev.next = node;
                node.next = current;
            }
    }

    public ListNode deleteFirst(){
            if (head == null){
                return null;
            }
            ListNode temp = head;
            head = head.next;
            temp.next = null;
            return temp;
    }

    public ListNode deleteEnd(){
            if (head == null  || head.next == null){
                return  head;
            }
            ListNode curr  = head;
            ListNode prev = null;
            while(curr.next  != null){
                prev = curr;
                curr = curr.next;
            }
            prev.next = null;
            return curr;
    }

    public void deletePosition(int position){
            if(position == 1){
                head = head.next;
            }else{
                ListNode prev = head;
                int count =1;
                while (count < position -1 ){
                    prev = prev.next;
                    count++;
                }
                ListNode curr = prev.next;
                prev.next = curr.next;
            }
    }



    public static void main(String[] args) {
        linkedList_singly singly = new linkedList_singly();
//        singly.head = new ListNode(10);
//        ListNode second = new ListNode(1);
//        ListNode third  = new ListNode(8);
//        ListNode fourth = new ListNode(11);
        // connecting in a form of chain
        singly.insertFirst(99);
        singly.insertEnd(100);
        singly.insertEnd(110);
        singly.insertEnd(120);
        singly.insertEnd(130);
        singly.insertPosition(3 ,220);
//        singly.head.next = second;
//        second.next = third;
//        third.next = fourth;
        singly.display();
        System.out.println("Lenght is : " + singly.length());
//        System.out.println(singly.deleteFirst().data);
//        singly.display();
//        System.out.println(singly.deleteEnd().data);
//        singly.display();
        singly.deletePosition(3);
        singly.display();

    }
}
