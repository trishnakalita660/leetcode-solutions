class Solution {
public:
    int climbStairs(int n) 
{
     int steps[n];
            if(n<=1)  return n;
   else   
           steps[0]=1;
           steps[1]=2;
     
    for(int i=2;i<n;i++)
     {
         steps[i]=steps[i-2]+steps[i-1];
     }
     return steps[n-1];
 }
};
 