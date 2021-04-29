// Given two integer arrays nums1 and nums2, return the maximum length of a subarray that appears in both arrays.

 

// Example 1:

// Input: nums1 = [1,2,3,2,1], nums2 = [3,2,1,4,7]
// Output: 3
// Explanation: The repeated subarray with maximum length is [3,2,1].
// Example 2:

// Input: nums1 = [0,0,0,0,0], nums2 = [0,0,0,0,0]
// Output: 5
 

// Constraints:

// 1 <= nums1.length, nums2.length <= 1000
// 0 <= nums1[i], nums2[i] <= 100

class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int t[A.size()+1][B.size()+1];
            int ans=0;
            for(int i=0;i< A.size()+1;i++){
                    for(int j= 0; j<B.size()+1; j++){
                            if(i==0 || j==0){
                                    t[i][j] = 0;
                            }
                            else if(A[i-1] == B[j-1]){
                                    t[i][j] = t[i-1][j-1]+1;
                                    ans = max(ans, t[i][j]);
                            }
                            else {
                                    t[i][j] =0;
                            }
                    }
            }
            return ans;
    }
};