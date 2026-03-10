class Solution:
    def checkDivisibility(self, n: int) -> bool:
        a=str(n)
        s,p=0,1
        for i in a:
            z=int(i)
            s+=z
            p*=z
        return n%(s+p)==0