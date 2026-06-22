class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>f;
        for(auto i:text){
            f[i]++;
        }
        
        return min({
            f['b'],
            f['a'],
            f['l'] / 2,
            f['o'] / 2,
            f['n']
        });
    }
};