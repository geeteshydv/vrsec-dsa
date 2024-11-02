    queue<int>q;
    queue<int>q1;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        if(q.size()==0) return -1;
        int ans=q.back();
        while(q.size()>1)
        {
            q1.push(q.front());
            q.pop();
        }
        q.pop();
        while(q1.empty()==false)
        {
            q.push(q1.front());
            q1.pop();
        }
        return ans;
    }