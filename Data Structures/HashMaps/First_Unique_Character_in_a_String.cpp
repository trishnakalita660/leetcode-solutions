class Solution {
public:
    int firstUniqChar(string s) {
        int index=s.size();
            unordered_map<char, pair<int,int>> map;
            
            for(int i=0;i<s.size();i++){
                    map[s[i]].first++;
                    map[s[i]].second = i;
            }
            
            for(auto &itr : map){
                    if(itr.second.first == 1) index = min(index, itr.second.second);
            }
            return index==s.size()?-1:index;
        
    }
};