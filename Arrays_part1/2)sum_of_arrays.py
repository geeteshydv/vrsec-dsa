https://www.geeksforgeeks.org/problems/sum-of-array2326/1


Cpp Code-:
int sum(vector<int>& arr) {
      int sum=0;
      for(int i=0;i<arr.size();i++)
      {
          sum+=arr[i];
      }
      return sum;
}



Java -:
int sum(int arr[]) {
        int sum = 0; // Initialize sum

        // Iterate through all elements and add them to sum
        for (int num : arr) {
            sum += num;
        }

        return sum; // Return the final sum
}



Python Code-:
def _sum(self, arr):
        # return sum using sum
        # inbuilt sum() function
        return (sum(arr))