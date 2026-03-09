class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix;
        prefix.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            prefix.push_back(nums[i]+prefix[i-1]);
        }
        for(int i=0;i<prefix.size();i++){
            int left=(i==0) ? 0:prefix[i-1];
            int right=prefix[prefix.size()-1]-prefix[i];
            if(left==right)return i;

        }
        return -1;
    }
};