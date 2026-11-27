class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>a(candyType.begin(),candyType.end());
        return min(a.size(),candyType.size()/2);
    }
};