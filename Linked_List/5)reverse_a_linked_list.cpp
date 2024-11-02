C++ Code-:

struct Node* reverseList(struct Node *head)
{
        Node* curr=head;
        Node* prev=NULL;
        
        while(curr!=NULL)
        {
            Node* save=curr->next;
            curr->next=prev;
            prev=curr;
            curr=save;
        }
        return prev;
}


Java-:
Node reverseList(Node head)
{
        Node prev=null;
        Node curr=head;
        
        while(curr!=null)
        {
            Node save=curr.next;
            curr.next=prev;
            prev=curr;
            curr=save;
        }
        return prev;
}


python -:
class Solution:
    # Function to reverse a linked list.
    def reverseList(self, head):
        curr = head
        prev = None
        
        while curr is not None:
            # Save the next node
            next_node = curr.next
            # Reverse the current node's pointer
            curr.next = prev
            # Move the prev and curr one step forward
            prev = curr
            curr = next_node
        
        return prev