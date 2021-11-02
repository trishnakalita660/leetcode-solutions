class Solution {
public:
    void solve(int col,vector<string> & board, vector<vector<string>>&ans,vector<int>& leftRow,
               vector<int>&upDiag,vector<int>& lowDiag,int n){
            
            if(col == n){
                    ans.push_back(board);
                    return;
            }
            
            for(int i=0;i<n;i++){
                    if(leftRow[i] ==0 && upDiag[n-1+col-i]==0 && lowDiag[i+col]==0){
                            board[i][col] = 'Q';
                            leftRow[i]=1;
                            upDiag[n-1+col-i]=1;
                            lowDiag[i+col]=1;
                            solve(col+1, board, ans, leftRow, upDiag, lowDiag, n);
                             board[i][col] = '.';
                            leftRow[i]=0;
                            upDiag[n-1+col-i]=0;
                            lowDiag[i+col]=0;
                    }
            }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        
        vector<int> leftRow(n,0), upDiag(2*n-1,0), lowDiag(2*n-1, 0);
        
        solve(0, board, ans, leftRow, upDiag, lowDiag, n);
        
        return ans;
    }
};