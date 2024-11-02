Solution 1-:

Steps-:
1)Simply making each subarray and store max result in it.

Code-: Time->O(n2)  Space ->O(1)
int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int curr_sum=0;
            for(int j=i;j<n;j++)
            {
                curr_sum+=nums[j];
                ans=max(ans,curr_sum);
            }
        }
        return ans;
}

Solution 2-:
Steps-:
1)By storing 


Solution -3:
Steps-:
1)max(Starting from new index or new index + previous prefix sum)

Code-:  Time->O(1)   Space ->O(1)
int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int curr_sum=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++)
        {
            curr_sum=max(curr_sum+nums[i],nums[i]);
            ans=max(ans,curr_sum);
        }
        return ans;
}

Java Code-:
int maxSubarraySum(int[] arr) {
         int currSum = arr[0];
        int maxSum = arr[0];

        for (int i = 1; i < arr.length; i++) {
            currSum = Math.max(currSum + arr[i], arr[i]);
            maxSum = Math.max(maxSum, currSum);
        }
        return maxSum; 
}

Python Code-:
class Solution:
    # Function to find the sum of contiguous subarray with maximum sum.
    def maxSubArraySum(self, arr):
        curr_sum = arr[0]
        max_sum = arr[0]

        for i in range(1, len(arr)):
            curr_sum = max(curr_sum + arr[i], arr[i])
            max_sum = max(max_sum, curr_sum)

        return max_sum