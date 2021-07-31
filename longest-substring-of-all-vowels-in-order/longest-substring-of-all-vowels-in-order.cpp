class Solution {
public:
    int longestBeautifulSubstring(string word) {
  
            int ans=0;
            int n = word.size();
           
            for(int i=0;i<n;){
            
            if(word[i]!='a'){
                    i++;
                    continue;
            }
                    int start = i;
               while(i<n && word[i] == 'a'){
                       i++;
               }
                if(i>=n || word[i]!= 'e' ){
                            continue;
                    }
                    
               while(i<n && word[i] == 'e'){
                       i++;
               }
                    if(i>=n || word[i]!= 'i' ){
                            continue;
                    }
                    
               while(i<n && word[i] == 'i'){
                       i++;
               }
                    if(i>=n || word[i]!= 'o' ){
                            continue;
                    }
                    
               while(i<n && word[i] == 'o'){
                       i++;
               }
                    if(i>=n || word[i]!= 'u' ){
                            continue;
                    }
                    
               while(i<n && word[i] == 'u'){
                       i++;
               }
                     
                    
                    ans = max(ans, i-start);
            }
   return ans;
    }
};