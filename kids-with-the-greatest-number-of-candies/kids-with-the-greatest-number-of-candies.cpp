class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      int max=0 ;
        vector<bool> op;
        for(int i=0;i<candies.size();++i){
           if(candies[i]>max){
               max=candies[i];
                
           }
       }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= max ){
                op.push_back(true);
            }
            else{
                op.push_back(false);
            }
        }
        return op;
        
    }
};