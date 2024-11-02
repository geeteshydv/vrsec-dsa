Question -:
https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

Solution 1-:
Steps-:
1)find from right side of array and maintain the largest element from right side.

Code-: Time->O(N) Space->O(1)
vector<int> leaders(int a[], int n){
       vector<int>v;
       v.push_back(a[n-1]);
       int maxx=a[n-1];
       
       for(int i=n-2;i>=0;i--)
       {
            if(a[i]>=maxx)
            {
                v.push_back(a[i]);
                maxx=a[i];
            }
       }
       reverse(v.begin(),v.end());
       return v;
}


Js Code-:
class Solution {
    // Function to find the leaders in the array.
    leaders(n, arr) {
        let v=[];
        v.push(arr[n-1]);
        let maxx=arr[n-1];
        
        for(let i=n-2;i>=0;i--)
        {
            if(arr[i]>=maxx)
            v.push(arr[i]);
            
            maxx=Math.max(maxx,arr[i]);
        }
        v.reverse();
        return v;
    }
}


Java Code-:
class Solution {
    static ArrayList<Integer> leaders(int arr[]) {
        int n = arr.length;
        ArrayList<Integer> leadersList = new ArrayList<>();
        int maxx = arr[n - 1];
        leadersList.add(maxx);

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxx) {
                leadersList.add(arr[i]);
                maxx = arr[i];
            }
        }

        Collections.reverse(leadersList);  // Reverse to maintain the original order
        return leadersList;
    }
}




Python Code-:
class Solution:
    def leaders(self, arr):
        n = len(arr)
        leaders_list = []
        maxx = arr[-1]
        leaders_list.append(maxx)

        for i in range(n - 2, -1, -1):
            if arr[i] >= maxx:
                leaders_list.append(arr[i])
                maxx = arr[i]

        leaders_list.reverse()  # Reverse to maintain the original order
        return leaders_list