class Solution {
public:
    string processStr(string s) {
        string res="";
        for(auto i:s){
            if(islower(i)){
                res+=i;
            }
            if(i=='#'){
                res+=res;
            }
            if(i=='*' && !res.empty()){
                res.pop_back();
            }
            if(i=='%'){
                reverse(res.begin(),res.end());
            }
        }
        return res;
    }
};