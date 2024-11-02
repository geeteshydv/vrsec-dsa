Solution 1-:
Steps-:
1)here we use stack.
2)There are 2 cases-:
  1. if there is opening bracket then put it into stack.
  2. else means there is closing charcter
     Three cases-:
     1. if stack is empty (means in stack there is no opening charcter) return false;
     2. if current closing charcter is matching  then we have to pop the opening charcter from stack because
        its balanced.
     3. its means opening and closing is not matching so return 0;


Code-: Time->O(N) Space ->O(N)
bool isValid(string s) 
{
        int n=s.length();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
           char ch=s[i];
           // opening charcter
           if(ch=='(' || ch=='{' || ch=='[')
           st.push(ch);
           //closing charcter
           else 
           {
            if(st.empty()==true)
            return 0;
            else if((st.top()=='(' and ch==')') || (st.top()=='{' and ch=='}')|| (st.top()=='[' and ch==']'))
            st.pop();
            else
            return 0;
           }
        }
        return (st.empty()==true);
}
