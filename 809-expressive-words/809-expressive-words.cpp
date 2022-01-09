class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
    
        int ans = 0;
        for(auto&w: words)
        {
            int j = 0,  i = 0;
            int cnt = 0;
            if (s.length() < w.length()) continue;
            while (i < s.length() && j < w.length())
            {
                cnt = 0;
                int k = i;
                while (i < s.length() && j < w.length() && w[j] == s[i] && s[i] == s[k])
                {
                    
                    ++cnt;
                    ++i;
                    ++j;
                }
                if (cnt == 0) break;
                 k = --i;
                while (k +1  < s.length() && s[k +1] == s[i]) ++k;
                if (k != i && cnt + k - i < 3) break;
                i = ++k;
            }
            ans += (i == s.length() && j == w.length());
        }
        return ans;
        
        
    }
};