class Solution:
    def secondHighest(self, s: str) -> int:
        l=set()
        for i in s:
            if i.isdigit():
                l.add(int(i))
        a=sorted(l)
        if(len(a)<2):
            return -1
        return a[-2]