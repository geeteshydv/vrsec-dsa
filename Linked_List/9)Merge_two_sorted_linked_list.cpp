Solution 1-:
Using recusrion 

Code-:
Node sortedMerge(Node head1, Node head2) 
{
      if(head1==null)
      return head2;
      if(head2==null)
      return head1;
      
      if(head1.data>head2.data)
      {
        head2.next=sortedMerge(head1,head2.next);
        return head2;
      }
      else
      {
          head1.next=sortedMerge(head1.next,head2);
          return head1;
      }
} 


Python Code-:
class Solution:
    def sortedMerge(self, head1, head2):
        # Base cases: if one of the lists is empty, return the other
        if head1 is None:
            return head2
        if head2 is None:
            return head1
        
        # Recursive merging based on the data values
        if head1.data > head2.data:
            head2.next = self.sortedMerge(head1, head2.next)
            return head2
        else:
            head1.next = self.sortedMerge(head1.next, head2)
            return head1