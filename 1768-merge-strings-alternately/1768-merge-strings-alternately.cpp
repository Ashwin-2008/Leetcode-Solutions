class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string r="";
        int i=0,j=0;
        while(i<word1.size() || j<word2.size()){
            if(i!=word1.size()){
            r+=word1[i];
            i++;
            }
            if(j!=word2.size()){
            r+=word2[j];
            j++;
            }
        }
        return r;
    }
};