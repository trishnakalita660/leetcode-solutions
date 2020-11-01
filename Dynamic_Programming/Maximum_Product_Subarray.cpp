class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        
        int maxProd=INT_MIN;
        
        int maxSoFar=1,minSoFar=1;
        
        for(int i=0;i<nums.size();i++)
        {
             int newMaxSoFar=max({maxSoFar*nums[i],nums[i],minSoFar*nums[i]});
             int newMinSoFar=min({minSoFar*nums[i],nums[i],maxSoFar*nums[i]});
            
             maxProd=max(newMaxSoFar,maxProd);
            
             maxSoFar=newMaxSoFar;
             minSoFar=newMinSoFar;
        }
        
        
        return maxProd;
    }
};