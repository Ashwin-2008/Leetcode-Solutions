class Solution {
public:
    bool isHappy(int n) {
        string a=to_string(n);
        unordered_set<int>seen;
        while(n!=1 && !seen.count(n)){
            seen.insert(n);
            int y=0;
            for(auto i:a){
                y+=(i-'0')*(i-'0');
            }
            n=y;
            a=to_string(y);
            y=0;
        }
        return n==1;
    }
};