class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        s = 0 
        for i in range(len(nums)+1):
            s += i
        for i in range(len(nums)):
            s -= nums[i]
        return s