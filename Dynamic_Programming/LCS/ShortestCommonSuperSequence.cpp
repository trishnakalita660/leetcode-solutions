class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(char* X, char* Y, int m, int n)
    {
        //code here
        int t[m+1][n+1];
        for(int i=0;i<m+1;i++){
            for(int j=0; j<n+1;j++){
                if(i==0 || j==0){
                    t[i][j] =0;
                }
                else{
                    if(X[i-1] == Y[j-1]){
                        t[i][j] = t[i-1][j-1]+1;
                    }else{
                        t[i][j] = max(t[i-1][j], t[i][j-1]);
                    }
                }
            }
        }
        return m+n-t[m][n];
    }
};