https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1

























Solution 2-:
Steps-:
1)Using hashSet.

Code-:
bool subArrayExists(int arr[], int n)
{
        unordered_set<int>s;
        s.insert(0);
        int pre_sum=0;
        
        for(int i=0;i<n;i++)
        {
           pre_sum+=arr[i];
           if(s.find(pre_sum)!=s.end())
           return true;
           else
           s.insert(pre_sum);
        }
        return false;
}


Java Code
static boolean findsum(int arr[],int n)
{
       int pre_sum=0;
       HashSet<Integer>s=new HashSet<>();
       for(int i=0;i<n;i++)
       {
           pre_sum+=arr[i];
           if(pre_sum==0)
           return true;
           if(s.contains(pre_sum))
           return true;
           s.add(pre_sum);
       }
       return false;
}