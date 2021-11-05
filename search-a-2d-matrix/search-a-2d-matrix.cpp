class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int flag=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]== target){
                    flag++;
                }
                
            }
        }
        if(flag<=0 || matrix.size()==0){
            return false;
        }
        
      return true;  
    }
};