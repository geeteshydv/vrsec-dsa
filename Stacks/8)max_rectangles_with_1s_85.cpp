Solution 1-:
Steps-:
1)Using area of historgram
2)here we calculate -:
  1. ist row as heights in histogram function
  2. 2nd row by adding 1st row values if there is 0 then we added  1st row values.
  so on 


  eg. 
  [1,0,1,0,0]   =>[1,0,1,0,0]     find the area of histogram  which is ->1
  [1,0,1,1,1]   =>[2,0,2,1,1]                                          ->4
  [1,1,1,1,1]   =>[3,1,3,2,2]                                          ->6
  [1,0,0,1,0]   =>[4,0,0,3,0]                                          ->4
                                                    max is 6 
                                                    o/p is 6
 

Code-:
int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            while(st.empty()==false and heights[st.top()]>=heights[i])
            {
               int index=st.top();
               st.pop();
               int val=heights[index]*((st.empty()==true)?i:(i-st.top()-1));
               ans=max(ans,val);
            }
            st.push(i);
        }

        while(st.empty()==false)
        {
            int index=st.top();
            st.pop();
            int val=heights[index]*((st.empty()==false)?(n-1-st.top()):n);
            ans=max(ans,val);
        }
        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>v(m,0);
        int res=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(matrix[i][j]=='0')
               v[j]=0;
               else
               v[j]=v[j]+(matrix[i][j]-'0');
            }
            res=max(res,largestRectangleArea(v));
        }
        return res;
    }