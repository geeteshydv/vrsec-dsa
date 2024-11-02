Solution 1-:
Steps-:
1)At current index we find prev_smaller until we add (current+=current_element).
2)At current index we find next_smaller elemnt until we add (current+=current_element).

Code-: Time->O(n2) Space->O(1)
int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int res=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int sum=heights[i];
            int val=heights[i];
            //left side
            for(int j=i-1;j>=0;j--)
            {
                if(heights[j]<val)
                break;
                else
                sum+=val;
            }

            //right side
            for(int j=i+1;j<n;j++)
            {
                if(heights[j]<val)
                break;
                else
                sum+=val;
            }
            res=max(res,sum);
        }
        return res;
    }



Solution 2-:
Steps-:
1)As we understand in sol1 we need prev smaller element and next smaller element but here we change a bit 
2)Here we find the prev smaller index and store into array1 
3)Now we find the next smaller index and store into array2.
4)Now travese the loop and calculate max as -:
   height[i] * (array2[i]-array1[i]-1)



Code-: Time->O(N)  Space->O(2n)  means using 2 stack here.
int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int lmin[n];
        lmin[0]=-1;
        stack<int>st;
        st.push(0);
        for(int i=1;i<n;i++)
        {
            while(st.empty()==false and heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            lmin[i]=-1;
            else
            lmin[i]=st.top();
            st.push(i);
        }
        int rmin[n];
        rmin[n-1]=n;
        stack<int>st2;
        st2.push(n-1);

        for(int i=n-2;i>=0;i--)
        {
            while(st2.empty()==false and heights[st2.top()]>=heights[i])
            {
                st2.pop();
            }
            if(st2.empty())
            rmin[i]=n;
            else
            rmin[i]=st2.top();
            st2.push(i);
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int val=(rmin[i]-lmin[i])-1;
            ans=max(ans,val*heights[i]);
        }
        return ans;
}



Solution 3-:
Steps-:
1)here we using one stack while we running the loop at index i if arr[i]<arr[st.top()] means for st.top() 
  index we find the next smaller element index and for prev smaller we find by st.top()
2)If there is stack empty for prev we use i 
3)If there is no element left in next side means we use =>n no. of  elements




Code-: Time->O(N) Space->O(N)
 int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        st.push(0);
        int ans=INT_MIN;

        for(int i=1;i<n;i++)
        {
            while(st.empty()==false and heights[i]<heights[st.top()])
            {
               int index=st.top();
               st.pop();
               int val1=heights[index];
               int val2=(st.empty()==true)?i:(i-st.top()-1);
               int value=val1*val2;
               ans=max(ans,value);
            }
            st.push(i);
            
        }

        while(st.empty()==false)
        {
            int index=st.top();
            st.pop();
            int val=heights[index] * ((st.empty()==false)?(n-st.top()-1):n);
            ans=max(ans,val);
        }
        return ans;
    }

  