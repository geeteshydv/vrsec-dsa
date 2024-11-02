Solution 1-:
Steps-:
1)Here we all index put into stack.
2)Now we take two index from stack.
  suppose i and j 
  if M[i][j]==1 means i know the j person which means i is not the celebrity.
  so we pop the i index from the stack.
  else
  M[i][j]==0 means i do not  know the j person so j is not celebrity.
  so we pop j from the stack.
3)At end we left with 1 index suppose its K
4)Now we check using for loop
  M[k][i]==1 means our possible person know to anyone return -1;
5)Now check if using for loop
  M[i][k]!=1 return -1;

  else
  return K th person is the celebrity.


Code-: Time->O(N) Space->O(N)

int celebrity(vector<vector<int> >& M, int n) 
    {
       int m=M[0].size();
       stack<int>st;
       for(int i=0;i<n;i++)
       {
           st.push(i);
       }
       
       while(st.size()>=2)
       {
           int top1=st.top();
           st.pop();
           int top2=st.top();
           st.pop();
           
           if(M[top1][top2]==1)
           st.push(top2);
           else
           st.push(top1);
       }
       
       int index=st.top();
       for(int i=0;i<m;i++)
       {
           if(M[index][i]==1)
           return -1;
       }
       
       // here we check if all person index jo jante ha 
       // here index ->index ko nhi jante mtlb celebrity apne aap ko v nhi jante so here we do continue;
       for(int i=0;i<m;i++)
       {
           if(i==index)
           continue;
           if(M[i][index]==0)
           return -1;
       }
       return index;
}







Solution 2-: Time->O(N^2)  Space->O(1)
Steps-:
1)Same pproach just replace stack here.

Code-:
int celebrity(vector<vector<int> >& M, int n) 
{
       int m=M[0].size();
       int ans=-1;
       // ans person kisk ko nhi janta
       for(int i=0;i<n;i++)
       {
           bool flag=true;
           for(int j=0;j<m;j++)
           {
               if(M[i][j]==1)
               flag=false;
           }
           if(flag==true)
           {
               ans=i;
               break;
           }
       }
       
       // here agr ans person ko any single person nhi janta then return -1;
       for(int i=0;i<n;i++)
       {
           if(i==ans) continue;
           if (M[i][ans]==0)
           return -1;
       }
       return ans;
}