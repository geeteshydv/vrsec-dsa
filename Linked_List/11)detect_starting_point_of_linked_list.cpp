Solution 1-:
Steps-:

Java 
public static int findFirstNode(Node head){
        HashSet<Node>s=new HashSet<>();
        Node curr=head;
        while(curr!=null)
        {
            if(s.contains(curr))
            return curr.data;
            else
            s.add(curr);
            curr=curr.next;
        }
        return -1;
}

C++
int findFirstNode(Node* head)
{
        unordered_set<Node*>s;
        Node* curr=head;
        while(curr!=NULL)
        {
            if(s.find(curr)!=s.end())
            return curr->data;
            else
            s.insert(curr);
            curr=curr->next;
        }
        return -1;
}



Solution 2-:
Steps-:
Using tortouise method
1)if there is loop so we find slow==fast.
2)now slow at head of the list and fast at which we find slow==fast
3)Now slow and fast move 1 step
4)When we reach slow==fast means this is the top of starting point of the loop.


Code-:
public static int findFirstNode(Node head){
       Node slow=head;
       Node fast=head;
       
       while(fast!=null && fast.next!=null)
       {
           slow=slow.next;
           fast=fast.next.next;
           if(slow==fast)
           break;
       }
       if(slow!=fast) return -1;
       
       slow=head;
       while(slow!=fast)
       {
           slow=slow.next;
           fast=fast.next;
       }
       return slow.data;
}


Python Code-:
class Solution:
    # Function to find the first node if the linked list has a loop
    def findFirstNode(self, head):
        slow = head
        fast = head
        
        # First detect if a loop exists
        while fast is not None and fast.next is not None:
            slow = slow.next
            fast = fast.next.next
            
            # If slow and fast meet, a loop is detected
            if slow == fast:
                break
        
        # If no loop is found, return -1
        if slow != fast:
            return -1
        
        # Move slow to the head and find the first node of the loop
        slow = head
        while slow != fast:
            slow = slow.next
            fast = fast.next
        
        # Return the data of the first node in the loop
        return slow.data