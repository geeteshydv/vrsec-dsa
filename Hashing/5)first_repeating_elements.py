https://www.geeksforgeeks.org/problems/first-repeating-element4018/1

Solution 1-:
Steps-:
1)Using 2 for loops

Code-: Time->O(n2)
int firstRepeated(int arr[], int n) 
{
  for(int i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
      {
        if(arr[i]==arr[j])
        return i+1;
      }
  }
  return -1;
}


Solution 2-:
Steps-:
1)Storing all key value in map.
2)Now traverse the for loop of array now check if its freq>1 then its return i+1; 

Code-: Time->O(N) Space ->O(N)
int firstRepeated(int arr[], int n) 
{
      unordered_map<int,int>m;
      for(int i=0;i<n;i++)
      {
          m[arr[i]]++;
      }
      
      for(int i=0;i<n;i++)
      {
          int freq=m[arr[i]];
          if(freq>=2)
          return i+1;
      }
      return -1;
}  

Python Code-:
class Solution:
    # Function to return the position of the first repeating element.
    def firstRepeated(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        frequency_map = {}
        
        # Count the frequency of each element
        for num in arr:
            if num in frequency_map:
                frequency_map[num] += 1
            else:
                frequency_map[num] = 1
        
        # Find the first repeated element's index
        for i in range(len(arr)):
            if frequency_map[arr[i]] >= 2:
                return i + 1  # Return 1-based index
        
        return -1  # No repeating element found