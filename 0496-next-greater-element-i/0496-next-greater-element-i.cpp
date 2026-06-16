class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>f;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(!st.empty()){
                f[nums2[i]]=st.top();
            }
            else{
                f[nums2[i]]=-1;
            }
            st.push(nums2[i]);
        }
        vector<int>ans;
        for(auto i:nums1){
            ans.push_back(f[i]);
        }
        return ans;
    }
};