class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
         unordered_map<int, int> map;
            vector<int> ans;
         for(auto i=0;i<num.size();i++){
                 int to_find = target-num[i];
                 
                 if(map.find(to_find)!=map.end()){
                         ans.push_back(i);
                         ans.push_back(map[to_find]);
                 }
                 
                 if(map.find(to_find) == map.end()){
                         map[num[i]]=i;
                 }
         }
            return ans;
    }
};