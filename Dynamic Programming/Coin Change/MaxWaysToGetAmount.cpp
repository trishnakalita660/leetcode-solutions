//  suppose amount = 8 && coins[] = [1,4,2,5]
// you need to find no of possible combinations of coins to get the amount

class Solution {
public:
    int change(int amount, vector<int>& coins) {
     if(coins.size()==0 && amount > 0){ return 0;}
     if(coins.size()==0 && amount == 0){ return 1;}
            
            int t[coins.size()+1][amount+1];
            t[0][0]=1;
            for(int i=1;i<=coins.size() ;i++){
                    t[i][0]=1;
                    for(int j=1;j<=amount ;j++){
                           t[0][j]=0; 
                           
                            if(coins[i-1]<=j){
                                    t[i][j] = t[i][j-coins[i-1]] + t[i-1][j];
                            }
                            else{
                                    t[i][j]= t[i-1][j];
                            }
                    }
            }
            return t[coins.size()][amount];
    }
};

