class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
            unordered_map<int,int> map;
            if(nums.size()==0) return false;
            
            for(auto x: nums){
                    map[x]++;
            }
            
            for(auto &itr : map){
                    if(itr.second >1) return true;
            }
            return false;
            
    }
};