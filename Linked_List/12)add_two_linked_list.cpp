static Node reverse(Node curr)
{
        Node prev=null;
        while(curr!=null)
        {
            Node save=curr.next;
            curr.next=prev;
            prev=curr;
            curr=save;
        }
        return prev;
}

static Node addTwoLists(Node num1, Node num2){
        Node curr1=reverse(num1);
        Node curr2=reverse(num2);
        Node new_head=null;
        Node curr=null;
        int carry=0;
        while(curr1!=null || curr2!=null || carry!=0)
        {
            int sum=0;
            if(curr1!=null)
            {
                sum+=curr1.data;
                curr1=curr1.next;
            }
            
            if(curr2!=null)
            {
                sum+=curr2.data;
                curr2=curr2.next;
            }
            sum+=carry;
            
            carry=sum/10;
            sum=sum%10;
            
            Node temp=new Node(sum);
            if(new_head==null)
            {
                new_head=temp;
                curr=temp;
            }
            else
            {
                curr.next=temp;
                curr=temp;
            }
        }
        
        Node head=reverse(new_head);
        while(head.data==0 && head.next!=null)
        {
            head=head.next;
        }
        return head;
}



class Solution {
  public:
    struct node *reverseIt(struct node *head, int k) {
        int count=0;
        node* prev=NULL;
        node* curr=head;
        
        while(curr!=NULL and count<k)
        {
            node* save=curr->next;
            curr->next=prev;
            prev=curr;
            curr=save;
            count++;
        }
        
        if(curr!=NULL)
        {
            node* rest_head=reverseIt(curr,k);
            head->next=rest_head;
        }
        return prev;
    }
};