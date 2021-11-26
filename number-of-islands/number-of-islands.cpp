class Solution {
public:
        void countIsland(int i, int j, int n, int m, vector<vector<char>>& grid){
                if(i<0 || i>= n || j<0 || j>=m|| grid[i][j] !='1') return;
                grid[i][j] ='$';
                countIsland(i+1, j, n,m, grid);
                countIsland(i-1, j, n,m, grid);
                countIsland(i, j-1, n,m, grid);
                countIsland(i, j+1, n,m, grid);
        }
    int numIslands(vector<vector<char>>& grid) {
        int count =0;
         int rows = grid.size(), cols = grid[0].size();
            
            if(rows==0) return 0;
            
            for(int  i =0; i<rows; i++){
                    for(int j=0; j<cols; j++){
                            if(grid[i][j]=='1'){
                                    countIsland(i, j, rows, cols, grid);
                                    count++;
                            }
                    }
            }
            
        return count;
    }
};