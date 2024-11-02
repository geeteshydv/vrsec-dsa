Question -:
https://www.geeksforgeeks.org/problems/find-the-frequency/1



Solution 1-: using hashing
Code-: Time ->O(N) Space->O(N)
int findFrequency(vector<int> Arr, int X)
{
    unordered_map<int,int>m;
    for(int i=0;i<Arr.size();i++)
    {
        m[Arr[i]]++;
    }
    
    return m[X];
}

Python Code-:
def findFrequency(arr, n, x):
    frequency_map = {}
    
    # Count the frequency of each element
    for num in arr:
        frequency_map[num] = frequency_map.get(num, 0) + 1
    
    # Return the frequency of x, defaulting to 0 if not found
    return frequency_map.get(x, 0)

In Java -:
int findFrequency(int Arr[], int X)
{
       HashMap<Integer,Integer>m=new HashMap<>();
       for(int i=0;i<Arr.length;i++)
       {
           m.put(Arr[i],m.getOrDefault(Arr[i],0)+1);
       }
       return m.containsKey(X)?m.get(X):0;
}




Solution 2-:
Steps-:
1)count the val of x in array and return it.

Code-:
int findFrequency(vector<int> Arr, int X)
{
    int count=0;
    for(int i=0;i<Arr.size();i++)
    {
        if(Arr[i]==X)
        count++;
    }
    return count;
}


In Java -:
int findFrequency(int Arr[], int X)
{
       int count=0;
       for(int i=0;i<Arr.length;i++)
       {
           if(Arr[i]==X)
           count++;
       }
       return count;
}