#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

void printAll(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void end(Node* head,int x)
{
    Node* temp=new Node(x);
    Node* curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=NULL;
}

int main() 
{
  Node* head=new Node(10);
  head->next=new Node(20);
  head->next->next=new Node(30);
  printAll(head);
  cout<<endl;
  end(head,40);
  printAll(head);
  return 0;
}




In java -:
import java.util.*;
import java.io.*;
import java.lang.*;


class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}

public class Main 
{
    static void printAll(Node head) 
    {
        while (head != null) 
        {
            System.out.print(head.data + " ");
            head = head.next;
        }
    }
    static void end(Node head,int x)
    {
        Node temp=new Node(x);
        Node curr=head;
        while(curr.next!=null)
        {
            curr=curr.next;
        }
        curr.next=temp;
        temp.next=null;
    }
    
    public static void main(String[] args) {
        Node head = new Node(10);
        head.next = new Node(20);
        head.next.next = new Node(30);
        printAll(head);
        System.out.println();
        end(head,40);
        printAll(head);
    }
}



Python -:
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def printAll(head):
    while head is not None:
        print(head.data, end=" ")
        head = head.next
    print()

def end(head, x):
    temp = Node(x)
    curr = head
    while curr.next is not None:
        curr = curr.next
    curr.next = temp
    temp.next = None

if __name__ == "__main__":
    head = Node(10)
    head.next = Node(20)
    head.next.next = Node(30)

    printAll(head)
    print()

    end(head, 40)
    printAll(head)
