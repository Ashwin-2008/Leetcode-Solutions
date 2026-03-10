class Solution {
public:
    bool checkDivisibility(int n) {
        string a=to_string(n);
        int s=0;
        int p=1;
        for(auto i:a){
            int z=i-'0';
            s+=z;
            p*=z;
        }
        if(n%(s+p)==0)return true;
        return false;
    }
};