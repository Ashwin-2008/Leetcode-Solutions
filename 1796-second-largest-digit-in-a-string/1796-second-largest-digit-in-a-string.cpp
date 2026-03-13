class Solution {
public:
    int secondHighest(string s) {
        set<int>a;
        for(auto i:s){
            if(isdigit(i)){
                a.insert(i-'0');
            }
        }
        if(a.size()<2){
            return -1;
        }
        auto it=a.rbegin();
        it++;
        return *it;
        

    }
};