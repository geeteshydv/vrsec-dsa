Solution 1-:
Steps-:
1)using hashset where we store all the node one by one.
2)if we get curr node in hashset that means there is a loop

Java 
public static boolean detectLoop(Node head){
        HashSet<Node>s=new HashSet<>();
        Node curr=head;
        while(curr!=null)
        {
            if(s.contains(curr))
            return true;
            else
            s.add(curr);
            curr=curr.next;
        }
        return false;
}


C++
bool detectLoop(Node* head)
{
       unordered_set<Node*>s;
       Node* curr=head;
       while(curr!=NULL)
       {
           if(s.find(curr)!=s.end())
           return true;
           else
           s.insert(curr);
           curr=curr->next;
       }
       return false;
}


Solution 2-:
Steps-:
1)slow = move 1 step
2)fast move 2 steps 
3)Here there is two case-:
  Case 1-:
  If there is loop means at a time slow==fast
  Case 2-:
  If there is no loop as we know slow move 1 step and fast 2 step slow and fast never meet so there return 0;


Java-:
public static boolean detectLoop(Node head){
       Node slow=head;
       Node fast=head;
       while(fast!=null && fast.next!=null)
       {
           slow=slow.next;
           fast=fast.next.next;
           if(slow==fast)
           return true;
       }
       return false;
}


C++-:
bool detectLoop(Node* head)
{
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            return true;
        }
        return false;
}


Python Code-:
class Solution:
    # Function to check if the linked list has a loop
    def detectLoop(self, head):
        # Initialize slow and fast pointers
        slow = head
        fast = head
        
        # Traverse the list with the two-pointer technique
        while fast is not None and fast.next is not None:
            slow = slow.next          # Move slow pointer by 1 step
            fast = fast.next.next     # Move fast pointer by 2 steps
            
            # If the slow pointer meets the fast pointer, there's a loop
            if slow == fast:
                return True
        
        # If we reach the end of the list without the pointers meeting, no loop
        return False
