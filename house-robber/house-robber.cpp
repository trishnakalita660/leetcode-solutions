class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
            if(n==0) return 0;
            if(n==1) return nums[0];
            if(n==2) return max(nums[0], nums[1]);
            
            
        vector<int> robbed(n,0);
   
        robbed[0] = nums[0];
            robbed[1] = max(nums[0],nums[1]);
            for(int i=2; i<n;i++){
                    robbed[i] = max(robbed[i-2]+nums[i] , robbed[i-1]);
            }
            
            return robbed[n-1];
    }
};