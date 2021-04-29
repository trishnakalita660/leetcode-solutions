// Given a string word consisting of English vowels, return the length of the longest beautiful substring of word. 
// If no such substring exists, return 0.

// A substring is a contiguous sequence of characters in a string.

// Input: word = "aeiaaioaaaaeiiiiouuuooaauuaeiu"
// Output: 13
// Explanation: The longest beautiful substring in word is "aaaaeiiiiouuu" of length 13.

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