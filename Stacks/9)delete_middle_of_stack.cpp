Solution 1-:
Steps-:
1)Using extra stack where we add top n/2 elements and then delete middle and
  after that we push back that n/2 store element into original stack.


Code-: Time->O(N) Space->O(N)
void deleteMid(stack<int>&s, int sizeOfStack)
    {
        stack<int>st;
        for(int i=0;i<sizeOfStack/2;i++)
        {
            st.push(s.top());
            s.pop();
        }
        
        s.pop();
        while(st.empty()==false)
        {
            s.push(st.top());
            st.pop();
        }
    }


Solution 2-:
Steps-:
1)using recusrion we delete till n/2 index and return from there 
2)And before poping the n/2 element we push again into stack.


Code-: Time->O(N) Space->O(1)
void helper(stack<int>&s,int n,int index)
    {
        if(index==n/2)
        {
            s.pop();
            return ;
        }
        int x=s.top();
        s.pop();
        
        helper(s,n,index+1);
        s.push(x);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int index=0;
        helper(s,sizeOfStack,index);
    }