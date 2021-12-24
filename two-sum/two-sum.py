class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        res={}
        for i in range(0, len(nums)):
                fin = target - nums[i]
                if fin in res:
                        return [i, res[fin]]
                
                res[nums[i]] = i