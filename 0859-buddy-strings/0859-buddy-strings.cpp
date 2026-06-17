class Solution {
public:
    bool buddyStrings(string s, string goal) {
        char a,b;
        int k,l;
        int c=0;
        if (s == goal) {
            vector<int> freq(26, 0);
            for (char ch : s) {
                freq[ch - 'a']++;
                if (freq[ch - 'a'] > 1)
                    return true;
            }
            return false;
        }
        if(s.size()!=goal.size())return false;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i] && c<=2){
                if(c==0){
                a=s[i];
                k=i;
                }
                if(c==1){
                    b=s[i];
                    l=i;
                }
                c+=1;
            }
            if(c>2)return false;
        }
        if (c != 2)
            return false;
        s[k]=b;
        s[l]=a;
        return s==goal;



    }
};