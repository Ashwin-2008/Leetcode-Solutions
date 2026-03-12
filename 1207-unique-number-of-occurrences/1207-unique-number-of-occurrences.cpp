class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>f;
        for(auto i:arr){
            f[i]++;
        }
        unordered_set<int>seen;
        for(auto i:f){
            if(seen.count(i.second))return false;
            else{
                seen.insert(i.second);
            }
        }
        return true;
    }
};