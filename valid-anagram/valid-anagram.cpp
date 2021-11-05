class Solution {
public:
    bool isAnagram(string s, string t) {
//             unordered_map<char, int> t1;
//             unordered_map<char, int> t2;
//             for(int i=0;i<s.length();i++){
//                     t1[s[i]]++;
//             }
//                       for(int i=0;i<t.length();i++){
//                     t2[t[i]]++;
//             }
        
//             return t1==t2 ? true:false;
            
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            
            return s==t;
    }
};