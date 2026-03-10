class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int> s(nums1.begin(), nums1.end());
        vector<int> ans;

        for(int x : nums2){
            auto it = s.find(x);
            if(it != s.end()){
                ans.push_back(x);
                s.erase(it);   // remove only one occurrence
            }
        }

        return ans;
    }
};