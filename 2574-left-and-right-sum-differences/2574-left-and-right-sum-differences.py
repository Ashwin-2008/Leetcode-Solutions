class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        p=[0]*len(nums)
        s=[0]*len(nums)
        for i in range(1,len(nums)):
            p[i]=p[i-1]+nums[i-1]
        for i in range(len(nums)-2,-1,-1):
            s[i]=s[i+1]+nums[i+1]
        ans=[0]*len(nums)
        for i in range(len(nums)):
            ans[i]=abs(p[i]-s[i])
        return ans
            