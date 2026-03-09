class Solution {
public:
    bool checkRecord(string s) {
        bool consecutive=false;
        bool award=false;
        int a=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                a+=1;
            }
            if(s[i]=='L'){
                if(i+2<s.size() && i+1<s.size()){
                    if(s[i+1]=='L' && s[i+2]=='L'){
                        consecutive=true;
                        break;
                    }
                }
            }
            
        }
        if(a<2 && !consecutive){
                return true;
            }
            return false;
    }
};