class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        ind=-1
        ma=float('-inf')
        for i in range(len(nums)):
            if(nums[i]>ma):
                ind=i
                ma=nums[i]
        for i in nums:
            if i*2>ma and i!=ma:
                return -1
        return ind