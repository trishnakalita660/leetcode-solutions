class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
           map<int,int>mp;
            for(int i=0;i<edges.size();i++){
                    mp[edges[i][0]]++;
                    mp[edges[i][1]]++;
            }
            
            for(auto &m : mp){
                    if(m.second == edges.size()){
                            return m.first;
                    }
            }
            return 0;
    }
};