Solution 1-:
Steps-:
1)here we use stack.
2)if the current element is interger put it into the stack.
3)if its +,-,*,/ this sign that evaluate the top two number of the stack.



Code-: Time->O(N) Space->O(N)
int evalRPN(vector<string>& tokens) {
         int n=tokens.size();
        stack<int>st;

        for(int i=0;i<n;i++)
        {
           if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
           {
              int val2=st.top();
              st.pop();
              int val1=st.top();
              st.pop();
              int ans;
              if(tokens[i]=="+")
              ans=val1+val2;
              else if(tokens[i]=="-")
              ans=val1-val2;
              else if(tokens[i]=="*")
              ans=val1*val2;
              else
              ans=val1/val2;
              st.push(ans);
           }
           else
           {
             int val=stoi(tokens[i]);
             st.push(val);
           }
        }
        return st.top();
    }