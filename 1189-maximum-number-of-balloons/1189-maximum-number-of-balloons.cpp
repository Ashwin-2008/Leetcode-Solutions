class Solution {
public:
    int maxNumberOfBalloons(string t) {
        int B=0,A=0,L=0,O=0,N=0;
        int c=0;
        for(auto i:t){
            if(i=='b'){
                B+=1;
            }
            if(i=='a'){
                A+=1;
            }
            if(i=='l'){
                L+=1;
            }
            if(i=='o'){
                O+=1;
            }
            if(i=='n'){
                N+=1;
            }
            if(B>=1&& A>=1 && L>=2 && O>=2 && N>=1){
                c+=1;
                B-=1;
                A-=1;
                L-=2;
                O-=2;
                N-=1;
            }
        }
        return c;
    }
};