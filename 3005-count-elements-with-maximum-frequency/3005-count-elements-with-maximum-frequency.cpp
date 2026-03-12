class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> f;
        int ma = 0;

        for(int x : nums){
            ma = max(ma, ++f[x]);
        }

        int ans = 0;
        for(auto [num, freq] : f){
            if(freq == ma) ans += freq;
        }

        return ans;
    }
};