class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mi = min_element(nums.begin(), nums.end()) - nums.begin();
        int ma = max_element(nums.begin(), nums.end()) - nums.begin();

        int p1 = min(mi, ma);
        int p2 = max(mi, ma);

        int n = nums.size();

        int left = p2 + 1;
        int right = n - p1;
        int both = p1 + 1 + n - p2;

        return min({left, right, both});
    }
};