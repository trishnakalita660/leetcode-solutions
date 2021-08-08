class Solution {
public:
    int maxSubArray(vector<int>& A) {
  
    int meh = 0, msf = INT_MIN;
            for(int i=0; i<A.size();i++){
                    meh+= A[i];
                    meh = max(meh,A[i]);
                    msf= max(msf,meh); 
            }
            return msf;
    
    }
};
