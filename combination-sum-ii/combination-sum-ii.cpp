class Solution {
public:
        vector<vector<int>> ans;
        vector<int> ref;
        void solve(int index, int target, vector<int>& candidates){
         
         if(target ==0){ ans.push_back(ref);
                   return;
                }
                
             else{   for(int i=index;i<candidates.size();i++){
                        if(candidates[i]>target) return;
                        if(i&& candidates[i] == candidates[i-1]&&i>index) continue;
                       
                        
                        ref.push_back(candidates[i]);
                        solve(i+1, target-candidates[i],candidates);
                        ref.pop_back();
                
                }
               
                   
                 }           
        }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            sort(candidates.begin(),candidates.end());
           solve(0, target, candidates);
    return ans;
        
    }
}; 
 