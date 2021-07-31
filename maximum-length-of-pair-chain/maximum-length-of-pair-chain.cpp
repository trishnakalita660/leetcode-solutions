class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        if(pairs.size()==0) return 0;
           sort(pairs.begin(), pairs.end(), [](vector<int>&a, vector<int>&b){ 
           return a[1]<b[1];
           });
            vector<int> pair =pairs[0];
            int count =0;
            for(int i=0;i<pairs.size();i++){
                    if(pairs[i][0]>pair[1] || i==0){
                            pair = pairs[i];
                            count++;
                    }
            }
            return count;
    }
};