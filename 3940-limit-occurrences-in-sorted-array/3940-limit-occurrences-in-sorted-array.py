class Solution:
    def limitOccurrences(self, nums: list[int], k: int) -> list[int]:
        prev=-float('inf')
        res=[]
        c=0
        for i in range(len(nums)):
            if nums[i]!=prev:
                prev=nums[i]
                c=1
            else:
                c+=1
            if c<=k:
                res.append(nums[i])
        return res
