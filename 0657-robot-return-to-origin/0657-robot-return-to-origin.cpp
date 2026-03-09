class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0,d=0;
        for(auto i:moves){
            if(i=='U')u+=1;
            if(i=='D')u-=1;
            if(i=='L')d-=1;
            if(i=='R')d+=1;
        }
        if(u==0 && d==0 )return true;
        return false;
    }
};