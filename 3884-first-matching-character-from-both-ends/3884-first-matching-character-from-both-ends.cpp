class Solution {
public:
    int firstMatchingIndex(string s) {
        int j=s.size()%2==0?s.size()/2:(s.size()+1)/2;
        for(int i=0;i<=j;i++){
            if(s[i]==s[s.size()-i-1]){
                return i;
            }
        }
        return -1;
    }
};