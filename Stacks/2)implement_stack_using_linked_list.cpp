// two cases-: 
1)when linked list is empty.
2)when not
void MyStack ::push(int x) 
{
   StackNode* temp=new StackNode(x);
   if(top==NULL)
   top=temp;
   else
   {
       temp->next=top;
       top=temp;
   }
}

Two cases-:
1)when linked list is empty.
2)when not
//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(top==NULL) return -1;
    int res=top->data;
    StackNode* temp=top;
    top=top->next;
    delete(temp);
    return res;
}