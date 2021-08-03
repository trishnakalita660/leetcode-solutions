class Solution {
public:
        void solve(vector<vector<int>> &ans,vector<int>&nums,vector<int>&dup,int index){
                ans.push_back(dup);
                for(int i=index;i<nums.size();i++){
                        if(i!=index && nums[i]==nums[i-1]) continue;
                        
                        dup.push_back(nums[i]);
                        solve(ans, nums,dup, i+1);
                        dup.pop_back();
                }
        }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
          vector<int> dup;
            sort(nums.begin(),nums.end());
            solve(ans,nums,dup,0);
            return ans;}
};