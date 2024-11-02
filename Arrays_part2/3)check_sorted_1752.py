Solution 1-:
Steps-:
1)Firstly checking if sorted 
2)then rotate by 1 and check again sorted or not.

Code-: Time->O(N^2)
bool sorted(vector<int>&nums)
{
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
            return false;
        }
        return true;
}

void rotate_by_one(vector<int>&nums)
{
        int n=nums.size();
        int temp=nums[0];
        for(int i=1;i<n;i++)
        {
            nums[i-1]=nums[i];
        }
        nums[n-1]=temp;
}

bool check(vector<int>& nums) 
{
        int n=nums.size();
        
        for(int i=1;i<n;i++)
        {
            if(sorted(nums))
            return true;
            else
            rotate_by_one(nums);
        }
        return (sorted(nums));
}



Solution 2-:
Steps-:
1)We make a count variable for if(nums[i-1]>nums[i]).
2)There is 3 cases-:
 
 1. If its already sorted then count=0 here we have to return true.
 2. The array is sorted rotated like [3,4,5,1,2]  means always arr[0]>arr[n-1]
    here we use count variable 
    if its sorted rotated then its count=1

    There is 2 sub cases-:
    1. [2,1,3,4] here count=1 but here arr[0]<arr[3] means we cannot sort this return false.
    2. [3,4,5,1,2]  here count=1 and arr[0]>arr[n-1]
    3. [6,10,6]     here we have to return true arr[0]>=arr[n-1]

 3. When count is greater than 1 [5,1,2,1,3]
    return false.



Code-: Time->O(N)
bool check(vector<int>& nums) 
{
        int n=nums.size();
        int count=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
            count++;
        }
        if(count==0) return true;
        else if(count>1) return false;
        else
        return (nums[n-1]<=nums[0]);
}


Python Code-:

def check(nums):
    n = len(nums)
    count = 0

    # Count the number of places where the array is not sorted
    for i in range(1, n):
        if nums[i] < nums[i - 1]:
            count += 1
    
    # If no unsorted pairs, it's already sorted
    if count == 0:
        return True
    # If more than 1 unsorted pair, it's not a rotated sorted array
    elif count > 1:
        return False
    # Otherwise, check if the array is rotated
    else:
        return nums[n - 1] <= nums[0]
