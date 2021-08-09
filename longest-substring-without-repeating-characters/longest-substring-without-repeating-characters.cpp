class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
           unordered_map<int,int> map;
            int i=0,j=1,ans=1;
            map[s[0]]=1;
            while(j<s.length()){
                   
                    if(map[s[j]]==0){
                             map[s[j]]=1;
                             ans = max(ans,j-i+1);
                              j++;  
                        
                    }
                    else{
                           
                            map[s[i]]--;
                              i++;
                          }
                  
                  
            }
            return ans;}
};