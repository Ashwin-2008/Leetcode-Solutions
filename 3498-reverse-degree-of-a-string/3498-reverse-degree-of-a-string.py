class Solution:
    def reverseDegree(self, s: str) -> int:
        r=0
        for i in range(len(s)):
            r+=(i+1)*(26-((ord(s[i]) - ord('a'))))
        return r