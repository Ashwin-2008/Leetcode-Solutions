class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA=0;
        int sumB=0;
        for(auto i:aliceSizes)sumA+=i;
        for(auto i:bobSizes)sumB+=i;
        int diff=(sumB-sumA)/2;
        unordered_set<int>s(bobSizes.begin(),bobSizes.end());
        for(auto i:aliceSizes){
            if(s.count(i+diff)){
                return {i,i+diff};
            }
        }
        return {};
    }
};