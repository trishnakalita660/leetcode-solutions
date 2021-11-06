class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        // vector<int> dp(nums.size(),1);
        //     int ans =1;
        //     if(nums.size()==0) return 0;
        //     for(int i=1;i<nums.size();i++){
        //             for(int j=0;j<i;j++){
        //                     if(nums[j]<nums[i]){
        //                     dp[i] = max(dp[i], dp[j]+1);
        //             }}
        //             ans = max(ans, dp[i]);
        //     }
        //     return ans;
            
            vector<int>ans;
            
            for(auto x: nums){
                    auto t = lower_bound(ans.begin(), ans.end(), x);
                    if(t== ans.end()) ans.push_back(x);
                    else *t = x;
            }
            return ans.size();
    }
};