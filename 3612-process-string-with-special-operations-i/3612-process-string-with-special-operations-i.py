class Solution:
    def processStr(self, s: str) -> str:
        st=""
        for i in s:
            if i>='a' and i<='z':
                st+=i
            if i=='#' and len(i)>0:
                st+=st
            if i=='*':
                st=st[:-1]
            if i=='%':
                st=st[::-1]
        return st