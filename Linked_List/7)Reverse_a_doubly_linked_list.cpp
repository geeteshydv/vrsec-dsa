C++
Code-:

Node* reverseDLL(Node * head)
    {
       Node* prev=NULL;
       Node* curr=head;
       
       while(curr!=NULL)
       {
           Node* save=curr->next;
           curr->next=prev;
           curr->prev=save;
           prev=curr;
           curr=save;
       }
       return prev;
    }


Java Code-:
public static Node reverseDLL(Node  head)
{
    Node curr=head;
    Node prev=null;
    
    while(curr!=null)
    {
        Node save=curr.next;
        curr.next=prev;
        curr.prev=save;
        
        prev=curr;
        curr=save;
    }
    return prev;
}

Python Code-:
class Solution:
    def reverseDLL(self, head):
        # Return the head of the reversed doubly linked list
        curr = head
        prev = None
        
        while curr is not None:
            # Save the next node
            save = curr.next
            # Reverse the next and prev pointers
            curr.next = prev
            curr.prev = save
            
            # Move prev and curr one step forward
            prev = curr
            curr = save
        
        # prev will now be the new head
        return prev