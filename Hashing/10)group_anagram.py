https://leetcode.com/problems/group-anagrams/description/

Solution -1  Time Complexity ->O(N *k(logk))    Space ->O(N)
             here N is for the whole traversal of string 
             K(log(k)) is for sort the string 

Steps-:
1)Make a hashmap for unordered_map<string,vector<string>>m;
2)Sort the string before sort save the original string.
3)Now m[sort_string].push_back(original_string)
4)At last we push it into ans vector of vector


Code-:
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        unordered_map<string,vector<string>>m;
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            sort(strs[i].begin(),strs[i].end());
            m[strs[i]].push_back(s);
        }

        for(auto x:m)
        {
            v.push_back(x.second);
        }
        return v;
}


Java Code-:
public List<List<String>> groupAnagrams(String[] strs)
{
        List<List<String>> result = new ArrayList<>();
        HashMap<String, List<String>> map = new HashMap<>();

        for (String str : strs) 
        {
            // Sort characters in the string
            char[] charArray = str.toCharArray();
            Arrays.sort(charArray);
            String sortedStr = new String(charArray);
            
            // Add the original string to its corresponding group
            if (!map.containsKey(sortedStr)) {
                map.put(sortedStr, new ArrayList<>());
            }  
            map.get(sortedStr).add(str);
        }

        // Convert map values to list
        for (List<String> group : map.values()) {
            result.add(group);
        }
        return result;
}


