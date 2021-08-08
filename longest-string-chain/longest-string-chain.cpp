class Solution {
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](string a, string b){
                return a.length()<b.length();
        });
        int res = 0;
            unordered_map<string, int> map;
            for(auto x: words){
                    map[x] = 1;
                    for(int i=0;i<x.length();i++){
                            string temp = x;
                             temp.erase(temp.begin()+i);
                            if(map.find(temp)!=map.end()){
                                    map[x] = max(map[x], map[temp]+1);
                            }
                    }
                    res = max(res, map[x]);
            }
    return res;}
};