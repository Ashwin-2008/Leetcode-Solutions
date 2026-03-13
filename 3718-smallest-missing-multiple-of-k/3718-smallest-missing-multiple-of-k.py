class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        e=0
        for i in range(len(nums)):
            if((i+1)*k not in nums):
                return (i+1)*k
            if(nums[i]%k==0):
                e=nums[i]
        return e+k