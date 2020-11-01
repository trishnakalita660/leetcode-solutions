#include<iostream>
#include<vector>
using namespace std;
int blabla(vector<int>& nums){
    int n= nums.size(), counter=0;
    if(n==0){ return 0;}
    if(n==2 && nums[0]==nums[1]){return 1;}
    if(nums[0]!=nums[1] && n==2){return 2;}
    if(n==1){ return 1;}
  int index=0, i=index+1;
  while(n!=0&& i!= nums.size()){
      int j=i;
      if(nums[i]!=nums[index]){ j++;}
      while(nums[j]==nums[i]){
          j++;
      }
      nums.erase(nums.begin()+i, nums.begin()+j);
      counter++;
      i= index+1;
  }

return counter;


}

int main(){
    vector<int> nums = {1,0,0,1,0};
    cout<< blabla(nums);
    
    return 0;

}