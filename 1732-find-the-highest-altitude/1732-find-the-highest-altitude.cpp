class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ma=0;
        int c=0;
        for(auto i:gain){
            c+=i;
            ma=max(ma,c);
        }
        return ma;
    }
};