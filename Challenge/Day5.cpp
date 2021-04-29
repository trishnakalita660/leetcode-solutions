class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
int e=0,o=0;
            for(auto x : position){
               if(x%2==0) e++;
               else o++;
       } 
            return o>=e?e:o;
    }
};