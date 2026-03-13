class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    int e;
    for(int i=0;i<nums.size();i++){
        if(find(nums.begin(),nums.end(),(i+1)*k)==nums.end()){
            return (i+1)*k;
        }
        if(nums[i]%k==0){
            e=nums[i];
        }
    }
    return e+k;

    }
};