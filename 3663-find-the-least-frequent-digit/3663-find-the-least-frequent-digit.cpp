class Solution {
public:
    int getLeastFrequentDigit(int n) {
        string a=to_string(n);
        unordered_map<int,int>f;
        for(auto i:a){
            f[i-'0']++;
        }
        vector<pair<int,int>>s(f.begin(),f.end());
        sort(s.begin(),s.end(),[](auto &x,auto &y){
        if(x.second==y.second){
            return x.first<y.first;
        }
        return x.second<y.second;});
        return s[0].first;
    }
};