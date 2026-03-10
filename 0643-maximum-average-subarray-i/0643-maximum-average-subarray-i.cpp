class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
                int l=0,h=k-1,s=0;
                for(int i=0;i<k;i++){
                    s+=nums[i];
                }
                int ma=s;
                while(h<nums.size()-1){
                    s-=nums[l];
                    l++;
                    h++;
                    s+=nums[h];
                    ma=max(ma,s);
                }
                return double(ma)/k;
    }
};