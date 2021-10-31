class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       // int i=0,j=n-1,target = m+n-1;
       //      nums1.insert(nums1.begin()+m,nums2.begin(),nums2.end());
       //      nums1.resize(m+n);
            
            for(int i=0;i<n;i++){
                    nums1[i+m] = nums2[i];
            }
            sort(nums1.begin(),nums1.end());
            
    }
};