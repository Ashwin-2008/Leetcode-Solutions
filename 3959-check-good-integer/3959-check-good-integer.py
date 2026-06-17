class Solution:
    def checkGoodInteger(self, n: int) -> bool:
        s,ss=0,0
        while(n>0):
            s+=n%10
            ss+=(n%10)*(n%10)
            n//=10
        return ss-s>=50