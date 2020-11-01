// Given an array of positive integers arr, calculate the sum of all possible odd-length subarrays.

// A subarray is a contiguous subsequence of the array.

// Return the sum of all odd-length subarrays of arr.


class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
            int sum1 =0;
            for(int i=0;i<arr.size();i++){
                    sum1+= ((i+1)*(arr.size()-i)+1)/ 2* arr[i];
            }
            return sum1;
        
    }
};