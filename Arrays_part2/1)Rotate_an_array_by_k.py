// Solution -1

Steps-:
1) Write a code for Rotate the array by 1 element
2) In main code run for loop k times and call the steps1 code there.

code-:
void helper(vector<int>&nums,int n)
{
      int save=nums[n-1];
      for(int i=n-2;i>=0;i--)
      {
         nums[i+1]=nums[i];
      }
      nums[0]=save;
}

void rotate(vector<int>& nums, int k) 
{
        int n=nums.size();
        for(int i=0;i<k;i++)
        {
           helper(nums,n);
        }
}


// Solution -2

Steps-:
Here we have to check the k should always be smaller then the length of array.
k=k%n;

1) reverse the array from (0,n-k-1)
2) reverse the array from (n-k,n-1);
3) reverse the array from (0,n-1);

Code-:

void reverse(vector<int>&nums,int i,int j)
    {
        while(i<j)
        {
          swap(nums[i],nums[j]);
          i++;
          j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
       
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }




Code-: Python-: 

def rotateArr(self,A,D,N):
        D%=N
        #First reversing d elements from starting index.
        A[0:D]=reversed(A[0:D])
        
        #Then reversing the last n-d elements.
        A[D:N]=reversed(A[D:N])
        
        #Finally, reversing the whole array.
        A[0:N]=reversed(A[0:N])





class Solution:
    def reverse(self, A, low, high):
        while low <= high:
            A[low], A[high] = A[high], A[low]  # Swap elements
            low += 1
            high -= 1

    # Function to rotate an array by d elements in counter-clockwise direction.
    def rotateArr(self, A, D, N):
        if D > N:
            D = D % N  # In case D is greater than the size of the array
        
        # Step 1: Reverse the first D elements
        self.reverse(A, 0, D - 1)
        # Step 2: Reverse the remaining N - D elements
        self.reverse(A, D, N - 1)
        # Step 3: Reverse the entire array
        self.reverse(A, 0, N - 1)
