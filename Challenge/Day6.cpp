class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,r=nums.back();
            
            while(l<r){
                    auto div = l+ (r-l)/2, total=0;
                    for(double x : nums){
                            total += ceil(x/div);
                    }
                    
                    if( total>threshold) { l=div+1; }
                    else r=div;
                    
            }
            return l;
    }
};
