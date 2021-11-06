class Solution {
public:
 
    int longestCommonSubsequence(string x, string y ) {
            int n = x.size(), m = y.size();
            int dp[n+1][m+1];
            
            for(int i=0;i<n+1;i++){
                    dp[i][0] =0;
            }
            
            for(int i=0;i<m+1;i++){
                    dp[0][i] =0;
            }
            
            
            for(int i=1;i<n+1;i++){
                    for(int j=1;j<m+1; j++){
                       if(x[i-1]==y[j-1]){
                               dp[i][j] = 1+dp[i-1][j-1];
                       }     
                       else{
                               dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                       } 
                    }
            }
            
            return dp[n][m];
            
            
//         int m= text1.length();
//         int n= text2.length();
//             int t[m+1][n+1];
//             for(int i=0;i<m+1;i++){
//              for(int j=0; j<n+1;j++)
//              {
//                     if(i==0 || j==0){
//                             t[i][j]=0;
//                     }
//             }
//             }            
            
//             for(int i=1;i<m+1;i++){
//                     for(int j=1; j<n+1;j++){
                           
//                             if(text1[i-1]== text2[j-1]){ t[i][j] = 1+ t[i-1][j-1];}
//                             else{ t[i][j]= max(t[i-1][j], t[i][j-1]);}
//                     }
//             }
//             int i= text1.length();
//             int j= text2.length();
//             string s;
//             while(i!=0 && j!=0){
//                     if(text1[i-1] == text2[j-1]){
//                             s.push_back(text1[i-1]);
//                             i--;j--;
//                     }
//                     else {
//                             if( t[i][j-1]> t[i-1][j]){
//                                     j--;
//                             }
//                     else{ i--;}}
//             }
//            reverse(s.begin(), s.end());
            
//             cout<<s;
//             return t[m][n];
            
            
    }
};