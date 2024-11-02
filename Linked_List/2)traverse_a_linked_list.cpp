Intro to linked list.

1)No need to pre-allocate the space (No extra space).
2)For eg. if we have 10 items data to be stored so exactly have 10 nodes in memory not more than that.
  we donot (pre-allocate) the space.
  (means element aaya v nhi or humne space bna de).





 Three Nodes -: 10->20->30
 1)1st node containing data 10 and address of 2nd node.
 2)2nd node containing data 20 and address of 3 node.
 3)3rd node containing data 30 and address NULL.










Solution 1-:
Iterative Solution-:

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

int main() 
{
  Node* head=new Node(10);
  head->next=new Node(20);
  head->next->next=new Node(30);
  printAll(head);
  return 0;
}



Python Code-:

class Node:
    def __init__(self, x):
        self.data = x
        self.next = None

def print_all(head):
    current = head
    while current is not None:
        print(current.data, end=' ')
        current = current.next
    print()  # for a new line after printing all elements

if __name__ == "__main__":
    head = Node(10)
    head.next = Node(20)
    head.next.next = Node(30)
    print_all(head)




Solution 2 -:

Recursive solution-:

#include <iostream>
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

void printall(Node* head)
{
    if(head==NULL)
    return ;
    cout<<head->data<<" ";
    printall(head->next);
}

int main()
{
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    printall(head);
    return 0;
}