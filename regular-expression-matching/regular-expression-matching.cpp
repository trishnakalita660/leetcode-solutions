class Solution {
public:
         bool t[21][31] = {false} ;
    bool isMatch(string s, string p) {
             t[0][0] = true;
            for(int i=1;i<=p.length();i++){
                   if(p[i-1] =='*'){
                    t[0][i] = t[0][i-2];
            }}
            
           
            for(int i=1;i<=s.length();i++){
             
            for(int j=1;j<=p.length();j++){
                    
                    if(s[i-1] == p[j-1] || p[j-1]=='.'){
                            t[i][j] = t[i-1][j-1];
                    }
                    else if(p[j-1] == '*'){
                            t[i][j] = t[i][j-2]  ;
                             if(p[j-2]=='.' || s[i-1] == p[j-2])
                             t[i][j] = t[i][j] || t[i-1][j];
                    } 
                    else t[i][j] = false;
                    
            }            }
            return t[s.length()][p.length()];
    }
};

// class Solution {
// public:
//     bool dp[21][31] = {false};
//     bool isMatch(string s, string p) {
//         int sLength = s.size();
//         int pLength = p.size();
//         dp[0][0] = true;
        
//         for(int j = 1; j<=pLength;++j) {
//             if(p[j-1]=='*') {
//                 dp[0][j] = dp[0][j-2];
//             }
//         }
        
//         for(int i = 1; i <=sLength; ++i) {
//             for(int j = 1; j <=pLength; ++j) {
//                 bool match = s[i-1] == p[j-1] || (p[j-1] == '.');
//                 if(p[j-1] == '*') {
//                     dp[i][j] = dp[i][j-2];
//                     if(p[j-2]=='.' || s[i-1] == p[j-2])
//                         dp[i][j] = dp[i][j] || dp[i-1][j];
//                 } else if(match) dp[i][j]=dp[i-1][j-1];
//                 else dp[i][j] = false;
//             }
//         }
//         return dp[sLength][pLength];
        
//     }
// };