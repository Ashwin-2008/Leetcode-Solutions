class Solution {
public:
    bool checkGoodInteger(int n) {
        int s=0;
        int ss=0;
        while(n>0){
            s+=(n%10);
            ss+=(n%10)*(n%10);
            n/=10;
        }
        return ss-s>=50;
    }
};