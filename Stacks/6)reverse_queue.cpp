Solution 1-:
Steps-:
1)Here we use stack to reverse the queue elements

Code-: Time->O(n) Space ->O(N)
queue<int> rev(queue<int> q)
{
        queue<int>q1;
        stack<int>st;
        while(q.empty()==false)
        {
            st.push(q.front());
            q.pop();
        }
        
        while(st.empty()==false)
        {
            q1.push(st.top());
           
            st.pop();
        }
        return q1;
}

Solution 2-:
Steps-:

 void helper(queue<int>&q)
    {
        if(q.size()==0)
        return ;
        
        int x=q.front();
        q.pop();
        helper(q);
        q.push(x);
    }
    queue<int> rev(queue<int> q)
    {
        helper(q);
        return q;
    }