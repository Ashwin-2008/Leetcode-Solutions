class Solution {
public:
    bool prime(int n){
        if(n<=1)return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>f;
        for(auto i:nums){
            f[i]++;
        }
        for(auto i:f){
            if(prime(i.second))return true;
        }
        return false;
    }
};