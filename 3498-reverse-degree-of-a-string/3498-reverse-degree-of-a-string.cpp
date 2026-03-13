class Solution {
public:
    int reverseDegree(string s) {
        int r=0;
        for(int i=0;i<s.size();i++){
            r+=(i+1)*(26-(s[i]-'a'));
        }
        return r;
    }
};