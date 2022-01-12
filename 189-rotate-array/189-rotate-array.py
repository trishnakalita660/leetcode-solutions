class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        
        
        """
        n= len(nums)
        if k==0 or n ==0:
                nums[:] = nums
        else :
                k= k%n
                nums[:] =nums[-k:]+nums[:-k] 
        