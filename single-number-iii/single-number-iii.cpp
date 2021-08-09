class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xOr = nums[0];
            
            for(int i=1;i<nums.size();i++){
                    xOr ^= nums[i];
            }
            
            long long mask = (xOr & -xOr);
            int A=0, B=0;
            
            for(auto x: nums){
                    if((mask&x) ==0){
                            A^=x;
                    }
                    else B^=x;
            }
            
            return {A,B};
    }
};  