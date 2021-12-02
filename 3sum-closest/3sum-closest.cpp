class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ref = INT_MAX, n=nums.size();
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<n && ref!=0;i++){
            int low = i+1, high = n-1;
            
            while(low<high){
                int sum = nums[i]+nums[low]+nums[high];
                if(abs(target-sum)<abs(ref)) ref = target-sum;
                
                if(sum<target) low++;
                else high--;
            }
        }
        return target-ref;
    }
};