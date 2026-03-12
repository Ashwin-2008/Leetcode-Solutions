class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>f;
        for(auto i:nums){
            f[i]++;
        }
        for(auto i:f){
            if(i.second>1)return i.first;
        }
        return -1;
    }
};