class Solution:
    def checkRecord(self, s: str) -> bool:
        con=False
        a=0
        for i in range(len(s)):
            if s[i]=='A':
                a+=1
            if s[i]=='L':
                if(i+1<len(s) and i+2<=len(s)):
                    if(s[i+1]=='L' and s[i+2]=='L'):
                        con=True
                        break
        if(a<2 and not con):
            return True
        return False
