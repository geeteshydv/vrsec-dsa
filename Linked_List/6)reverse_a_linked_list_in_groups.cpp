https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

Solution 1-:
Java-:
public static Node reverse(Node head, int k)
{
        Node curr=head;
        Node prev=null;
        int count=0;
        
        while(curr!=null && count<k)
        {
            Node save=curr.next;
            curr.next=prev;
            prev=curr;
            curr=save;
            count++;
        }
        
        if(curr!=null)
        {
            Node rest_head=reverse(curr,k);
            head.next=rest_head;
        }
        return prev;
}


Python Code-:
class Solution:
    def reverse(self, head, k):
        curr = head
        prev = None
        count = 0

        # Reverse the first 'k' nodes of the linked list
        while curr is not None and count < k:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
            count += 1

        # Recursively reverse the rest of the list from the (k+1)th node onward
        if curr is not None:
            rest_head = self.reverse(curr, k)
            head.next = rest_head

        # Return the new head of the reversed group
        return prev