class Solution {
public:
    string sortSentence(string s) {
        vector<string>z;
        string y;
        for(auto i:s){
            if(i==' '){
                z.push_back(y);
                y="";
            }
            else{
                y+=i;
            }
        }
        z.push_back(y);
        sort(z.begin(),z.end(),[](auto a,auto b){
            return (a[a.size()-1]-'0')<(b[b.size()-1]-'0');
        });
        string r;
        for(auto i:z){
            i[i.size()-1]=' ';
            r+=i;
        }
        r.pop_back();
        return r;
    }
};