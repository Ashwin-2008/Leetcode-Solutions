class Solution {
public:
    int sum(int n){
        string t=to_string(n);
        int s=0;
        for(auto i:t){
            s+=(i-'0');
        }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i==sum(nums[i])){
                return i;
            }
        }
        return -1;
    }
};