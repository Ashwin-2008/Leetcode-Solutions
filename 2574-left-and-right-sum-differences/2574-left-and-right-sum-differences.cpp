class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        stack<int>st;
        queue<int>pq;
        for(auto i:nums){
            st.push(i);
            pq.push(i);
        }
        vector<int>ls;
        vector<int>rs;
        int prev=0;
        int aft=0;
        for(int i=0;i<nums.size();i++){
            ls.push_back(prev);
            prev+=pq.front();
            pq.pop();
            rs.push_back(aft);
            aft+=st.top();
            st.pop();
        }
        reverse(rs.begin(),rs.end());
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(ls[i]-rs[i]));
        }
        return ans;
    }
};