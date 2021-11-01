class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size()== r*c){
        vector<vector<int>> ans;
        vector<int> submat;
            for(int i=0;i<mat.size();i++){
                    for(int j=0;j<mat[0].size();j++){                            
                            submat.push_back(mat[i][j]);
                            if(submat.size()==c){
                                    ans.push_back(submat);
                                    submat.clear();
                            }
                            
                    }
            }
            return ans;}
            return mat;
    }
};