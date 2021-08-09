class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int t[A.size()+1][B.size()+1];
            int ans=0;
            for(int i=0;i< A.size()+1;i++){
                    for(int j= 0; j<B.size()+1; j++){
                            if(i==0 || j==0){
                                    t[i][j] = 0;
                            }
                            else if(A[i-1] == B[j-1]){
                                    t[i][j] = t[i-1][j-1]+1;
                                    ans = max(ans, t[i][j]);
                            }
                            else {
                                    t[i][j] =0;
                            }
                    }
            }
            return ans;
    }
};