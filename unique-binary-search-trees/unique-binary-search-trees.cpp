class Solution {
public:
    int solve(int start, int end, vector<vector<int>> &dp){
            if(start>end) return 1;
            if(dp[start][end]!=0) return dp[start][end];
            
            for(int i=start; i<=end;i++){
                    int left = solve(start,i-1,dp);
                    int right = solve(i+1,end,dp);
                    
                    dp[start][end] += left*right;
            }
            return dp[start][end];
            
    }    
    int numTrees(int n) {
            vector<vector<int>> dp(n+1, vector<int>(n+1));
            return solve(1,n,dp);
        
    }
};