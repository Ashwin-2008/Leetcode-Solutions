class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        s1+=" "+s2;
        unordered_map<string,int>f;
        string z;
        for(auto i:s1){
            if(i!=' ' && i!=','){
                z+=i;
            }
            else{
                f[z]++;
                z="";
            }
        }
        if(z!="")f[z]++;
    vector<string>a;
        for(auto i:f){
            if(i.second==1){
                a.push_back(i.first);
            }
        }
        return a;
    }
};