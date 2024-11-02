SOlution 1-:
Steps-:
1)Using same idea as we do in stock span problem.


Code-:
vector<long long> nextLargerElement(vector<long long> arr, int n){
       vector<long long>v;
       stack<int>st;
       st.push(n-1);
       v.push_back(-1);
       for(int i=n-2;i>=0;i--)
       {
           while(st.empty()==false and arr[st.top()]<=arr[i])
           {
               st.pop();
           }
           if(st.empty()==false)
           v.push_back(arr[st.top()]);
           else
           v.push_back(-1);
           
           st.push(i);
       }
       reverse(v.begin(),v.end());
       return v;
}