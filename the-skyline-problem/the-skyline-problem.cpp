class Solution {
public:
        
  static  bool cmp(pair<pair<int,int>,int>&a,  pair<pair<int,int>,int>&b){
            if(a.first.first != b.first.first){
                    return a.first.first< b.first.first;
            }
            else if(a.second ==0 && b.second==0){
                    return a.first.second> b.first.second;
            }
            else if(a.second ==1 && b.second ==1 ){
                    return a.first.second< b.first.second;
            }
            
            return a.second<b.second;
          
          
    }
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
            
         vector<vector<int>> ans;
         vector<pair<pair<int,int>,int>> outline;
            // ector<pair<pair<int,int>,int>>
         for(int i=0;i<buildings.size(); i++){
                 outline.push_back({{buildings[i][0],buildings[i][2]}, 0});
                 outline.push_back({{buildings[i][1],buildings[i][2]}, 1});
         }
            
            sort(outline.begin(),outline.end(),cmp);
            
            int max_h =0;
            multiset<int, greater<int>> ms;
            ms.insert(0);
            for(auto x: outline){
                    int x_dir = x.first.first;
                    int height = x.first.second;
                    int type = x.second;
                    
                    if(type ==0){
                         ms.insert(height);   
                    }
                    else{
                            auto it = ms.find(height);
                            if(it!=ms.end()) ms.erase(it);
                    }
                    
                    if(max_h!= *ms.begin()){
                            max_h = *ms.begin();
                            ans.push_back({x_dir, max_h});
                    }
            }
            
            return ans;
    }
};