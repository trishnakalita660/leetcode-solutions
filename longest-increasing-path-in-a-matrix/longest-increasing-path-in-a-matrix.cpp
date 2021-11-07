class Solution {
public:
        int  dfs(int i,int j,int m,int n,int prev,vector<vector<int>>&  dp,vector<vector<int>>&  visited,vector<vector<int>>&  matrix){
                if(i<0 || i>=m || j<0 || j>=n || visited[i][j]){ return INT_MIN;}
                
                if(matrix[i][j] <= prev){ return 0;}
                
                if(dp[i][j]!= -1) return dp[i][j];
                prev = matrix[i][j];
                int len =0;
                vector<int> dx = {-1, 0,1,0};
                vector<int> dy = {0,1,0,-1};
                visited[i][j] =1;
                for(int k=0;k<4;k++){
                        len = max(len, dfs(i+dx[k], j+dy[k],m,n,prev,dp,visited,matrix));
                }
                visited[i][j] =0;
                return dp[i][j] = len+1;
                
        }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n,-1));
        vector<vector<int>> visited(m, vector<int>(n,0));
        int prev = INT_MIN, ans =0;
            for(int i=0;i<m;i++){
                    for(int j=0;j<n;j++){
                            ans = max(ans, dfs(i,j,m,n,prev,dp,visited,matrix));
                    }
            }
            return ans;
    }
};