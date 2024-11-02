Solution 1-:
Step-:
1)Store the elements in hashset.
2)Then find.


Code-:
int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        v.push_back(nums[0]);
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=v.back())
            v.push_back(nums[i]);
        }

        for(int i=0;i<v.size();i++)
        {
            nums[i]=v[i];
        }
        return v.size();
}



Solution 2-:
Steps-:
1)Using xor 

Code-:
int missingNumber(vector<int>& nums) {
       int ans=0;
       for(int i=0;i<nums.size();i++)
       {
           ans=ans^(i+1)^nums[i];
       }
       return ans;
}

Python Code-:

class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans = 0
        n = len(nums)
        
        # XOR all indices and values
        for i in range(n):
            ans ^= (i + 1) ^ nums[i]
        
        return ans


JS Code-:
var missingNumber = function(nums) {
    let n=nums.length;

    let ans=0;
    for(let i=0;i<n;i++)
    {
        ans=(ans^(nums[i])^(i+1));
    }
    return ans;
};


Solution 3-:
Steps-:
1)sum1= sum of all number from 1 to n.
2)sum2= sum of array elements.
3)return sum1-sum2;    this number is missing number.

Code-:
var missingNumber = function(nums) {
    let n=nums.length;

    let sum1=n*(n+1)/2;

    let sum2=nums.reduce((curr,res)=>(curr+res),0);
    return sum1-sum2;
};