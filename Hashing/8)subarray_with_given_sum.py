https://www.geeksforgeeks.org/problems/subarray-ra nge-with-given-sum2804/1


Solution 1-:
Steps-:
1)Using 2 for loops

Code-:
int subArraySum(int arr[], int n, int sum)
{
        int count=0;
        for(int i=0;i<n;i++)
        {
            int curr_sum=0;
            for(int j=i;j<n;j++)
            {
                curr_sum+=arr[j];
                if(curr_sum==sum)
                count++;
            }
        }
        return count;
}

Solution 2-:
Steps-:
1)Here we make hashmap to store the count as value and sum as key.
2)we are using prefix_sum to find the count of subarray those sum is equal to target.


C++ Code-:
int subArraySum(int arr[], int n, int sum)
{
        int count=0;
        int pre_sum=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            pre_sum+=arr[i];
            if(pre_sum==sum)
            count++;
            
            if(m.find(pre_sum-sum)!=m.end())
            count+=m[pre_sum-sum];
            
            m[pre_sum]++;
        }
        return count;
}


Java Code-:
public static int subArraySum(int[] arr, int n, int sum)
{ 
       int count=0;
       HashMap<Integer,Integer>m=new HashMap();
       
       int pre_sum=0;
       for(int i=0;i<n;i++)
       {
           pre_sum+=arr[i];
           if(pre_sum==sum)
           count++;
           
           if(m.containsKey(pre_sum-sum))
           count+=m.get(pre_sum-sum);
           
           m.put(pre_sum,m.getOrDefault(pre_sum,0)+1);
       }
       return count;
}