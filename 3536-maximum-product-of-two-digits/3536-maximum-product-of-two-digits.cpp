class Solution {
public:
    int maxProduct(int n) {
        string t=to_string(n);
        sort(t.begin(),t.end(),greater<char>());
        return (t[0]-'0')*(t[1]-'0');
    }
};