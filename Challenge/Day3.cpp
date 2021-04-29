// Given a string s, the power of the string is the maximum length of a non-empty substring that contains only one unique character.

// Return the power of the string.

 

// Example 1:

// Input: s = "leetcode"
// Output: 2
// Explanation: The substring "ee" is of length 2 with the character 'e' only.


class Solution {
public:
    int maxPower(string s) {
        int counter = 1; int maxm= 1;
         
           for(int i= 1; i<s.size();i++){
                   if(s[i]==s[i-1]){ counter++; maxm= max(maxm,counter);}
                   else{ counter=1;}
           }
            return maxm;
    }
};

