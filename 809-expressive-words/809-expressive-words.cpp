 
class Solution {
public:
   // check for each token/sub-word
    bool help(string str1, string str2) {
        if(str1[0] != str2[0]) return false;
        if(str1.size()==str2.size()) return true;
        if(str2.size() > str1.size()) return false;
        if(str2.size()==1 && str1.size()==2) return false;
        return true;
    }
    // split of each word with same repeated char
    bool solve(string s, string word) {
        int i = 0, j = 0;
        while(i<s.size() && j<word.size()) {
            string str1 = "";
            string str2 = "";
            char ch1 = s[i];
            char ch2 = word[j];
            while(ch1 == s[i]) {
                str1 += s[i];
                i++;
            }
            while(ch2 == word[j]) {
                str2 += word[j];
                j++;
            }
            if(!help(str1,str2)) return false;
        }
        if(i!=s.size() || j!=word.size()) return false;
        return true;
    }
    // main function
    int expressiveWords(string s, vector<string>& words) {
        int ans = 0;
        for(auto x : words){
            if(solve(s,x)) ans++;
        }
        return ans;
    }
};