class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>r;
        int c=0;
        int prev=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=prev){
                prev=nums[i];
                c=1;
            }
            else{
                c++;
            }
            if(c<=k)r.push_back(nums[i]);
        }
        return r;
    }
};