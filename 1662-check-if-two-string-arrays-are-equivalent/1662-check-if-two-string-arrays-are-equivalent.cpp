class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string res1;
    for(auto &w : word1) res1 += w;  
    string res2;
for(auto &w : word2) res2 += w;
return res1==res2;
    }
};