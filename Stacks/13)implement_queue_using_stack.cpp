Solution 1-:
Steps-:
1)Here we use 2 stacks s1 and s2.

Pushing -:
1)We do normally for push the element into the st1.

Pop-:
1)here we first put all the elements of st1 into st2.
2)Then save the top element of st2 and the pop it.
3)here that save element is our answer.

Peek element-:
1)same steps as we do in pop.

isEmpty()-:
1)return (st1.empty()==true);



Code-:
Time Complexity -:
1) push ->O(1)
2) pop  ->O(N)
3) peek ->O(N)
4) empty ->O(1)


class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>st1;
    stack<int>st2;
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        while(st1.empty()==false)
        {
            int top=st1.top();
            st1.pop();
            st2.push(top);
        }

        if(st2.empty()==true) return -1;
        else 
        {
           int ans=st2.top();
           st2.pop();
           while(st2.empty()==false)
           {
               int top=st2.top();
               st2.pop();
               st1.push(top);
           }
           return ans;
        }
    }
    
    int peek() {
        if(st1.empty()==true) return -1;

        while(st1.empty()==false)
        {
            st2.push(st1.top());
            st1.pop();
        }

        int ans=st2.top();
        while(st2.empty()==false)
        {
            st1.push(st2.top());
            st2.pop();
        }
        return ans;
    }
    
    bool empty() {
        return (st1.empty()==true);
    }
};




Solution 2-:
Steps-:
1)Using 2 stack.

Push-:
1)here we use 2 stack st1,st2. 
  where st1 is in the form of queue just do the dry run part for it.

2)Pop-:
  Simple top element of st1 is the pop.

3)Peek-:
  Simple top element of st1 is the peek.



Code-:
class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>st1;
    stack<int>st2;
    
    void push(int x) {
        while(st1.empty()==false)
        {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);

        while(st2.empty()==false)
        {
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
       int ans=st1.top();
       st1.pop();
       return ans;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return (st1.empty()==true);
    }
};