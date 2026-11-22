class Solution {
public:
    bool checkString(string s) {
        bool a=false;
        for(auto i:s){
            if(i=='a' && a){
                return false;
            }
            if(i=='b'){
                a=true;
            }
        }
        return true;
    }
};