class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        
        
        """
        if k==0 or len(nums) ==0:
                nums[:] = nums
        else :
                k= k%len(nums)
                nums[:] =nums[-k:]+nums[:-k] 
        