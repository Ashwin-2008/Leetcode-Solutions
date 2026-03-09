class Solution {
public:
    bool judgeCircle(string moves) {
        int c=0;
        for(auto i:moves){
            if(i=='U')c+=1;
            if(i=='D')c-=1;
            if(i=='L')c-=1;
            if(i=='R')c+=1;
        }
        if(c==0)return true;
        return false;
    }
};