class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int ans1=0,ans2=0;
        for(auto i:nums1){
            if(find(nums2.begin(),nums2.end(),i)!=nums2.end()){
                ans1+=1;
            }
        }
        for(auto i:nums2){
            if(find(nums1.begin(),nums1.end(),i)!=nums1.end()){
                ans2+=1;
            }
        }
        return {ans1,ans2};
    }
};