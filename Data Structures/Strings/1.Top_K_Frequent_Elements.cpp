// Given a non-empty array of integers, return the k most frequent elements.

// Example 1:

// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]



class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int,int> map;
            vector<pair<int,int>> mn;
           for(auto x : nums){
                   map[x]++;
                   
        	}
 for(auto &itr : map){
         mn.push_back(make_pair(itr.second,itr.first));
         
 }     
     sort(mn.begin(),mn.end());
      vector<int>ans;
      for(auto &itr : mn){
              ans.push_back(itr.second);
      } 
            ans.erase(ans.begin(),ans.end()-k);
      return ans; 
    }
        
       
};