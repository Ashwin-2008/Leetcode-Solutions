class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>z;
        for(auto i:s){
            if(!z.empty() && i==z.top()){
                z.pop();
            }
            else{
            z.push(i);
            }
        }
        string a;
        while(!z.empty()){
            a+=z.top();
            z.pop();
        }
        reverse(a.begin(),a.end());
        return a;
    }
};