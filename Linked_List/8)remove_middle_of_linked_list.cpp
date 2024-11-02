
Solution 1-:
Steps-:
1)Count the total nodes.
2)using prev and curr we delete the middle element of linked list.


Code-:
int Count(Node* head)
{
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
}

Node* deleteMid(Node* head)
{
       
       int count=Count(head);
       if(count==1)
       return head;
       Node* prev=NULL;
       Node* curr=head;
       for(int i=0;i<count/2;i++)
       {
           prev=curr;
           curr=curr->next;
       }
       prev->next=curr->next;
       return head;
}


In java-:
int Count(Node head)
{
        int count=0;
        while(head!=null)
        {
            count++;
            head=head.next;
        }
        return count;
}
    
Node deleteMid(Node head) {
       int count=Count(head);
       if(count==1)
       return head;
       Node prev=null;
       Node curr=head;
       for(int i=0;i<count/2;i++)
       {
           prev=curr;
           curr=curr.next;
       }
       prev.next=curr.next;
       return head;
}


Solution 2-:
Steps-:
1)Using tortuoise method.
2)Slow and fast pointer.


In Java-:
Node deleteMid(Node head) {
      if(head.next==null)
      return null;
       
       Node slow=head;
       Node fast=head;
       Node prev=null;
       while(fast!=null && fast.next!=null)
       {
           prev=slow;
           slow=slow.next;
           fast=fast.next.next;
       }
       prev.next=slow.next;
       return head;
}



Python Code-:
class Solution:
    
    def deleteMid(self, head):
        '''
        head: head of the given linked list
        return: head of the resultant list after deleting the middle node
        '''
        
        # Edge case: if there's only one node, return None (as we are deleting the middle)
        if head is None or head.next is None:
            return None

        # Initialize slow, fast, and prev pointers
        slow = head
        fast = head
        prev = None
        
        # Using the slow and fast pointer approach to find the middle node
        while fast is not None and fast.next is not None:
            prev = slow
            slow = slow.next
            fast = fast.next.next
        
        # prev will point to the node before the middle one
        # Set prev.next to skip the middle node (slow)
        if prev is not None:
            prev.next = slow.next
        
        return head