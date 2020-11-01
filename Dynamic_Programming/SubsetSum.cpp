// Find Subset with given sum

#include <bits/stdc++.h>
using namespace std;
 
  bool isSubset(vector<int>& nums, int sum,int n){
        bool t[n+1][sum+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                t[0][0]=true;
                    t[0][j]= false;
                 
                t[i][0]= true;
                        
                 if(nums[i-1]<=j){
                    t[i][j]= (t[i][j-nums[i-1]] || t[i-1][j]);
                    
                }
                else{t[i][j]= t[i-1][j];}
            }
        }
        return t[n][sum];
        
    }
  

 int main(){
     vector<int> nums;
     nums.push_back(1);
     nums.push_back(4);
     nums.push_back(2);
     nums.push_back(13);
     int sum = 3;
     bool n = isSubset( nums, sum,nums.size());
     cout<<n;
      
 }