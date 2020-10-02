
class Solution {
public:
     int subarraysDivByK(vector<int>& A, int K) {
        vector<int> newer(K);
        newer[0] = 1;
        int prefix = 0, res = 0;
        for (int a : A) {
            prefix = (prefix + a % K + K) % K;
            res += newer[prefix]++;
        }
        return res;
    }
};


// Brute force Solution

//  int subarraysDivByK(vector<int>& A, int K) {
//       int c=0;
         
//             for(int i=0;i<A.size();i++){
//                     int sum =0;
//                     sum = A[i];
//                     if(A[i]%K ==0  ) c++;
//                     for(int j=i+1; j<A.size();j++){
//                             sum += A[j];
//                             if(sum%K==0) c++;
//                     }
//             }
//             return c;
//     }