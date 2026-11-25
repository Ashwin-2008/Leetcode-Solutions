class Solution {
public:
    string digitSum(string s, int k) {
        int cnt=0;
        
        int sum=0;
        while(s.size()>k){
            string p="";
        for(int i=0;i<s.size();i++){
            sum+=s[i]-'0';
            cnt++;
            if(cnt==k || i==s.size()-1){
                p+=to_string(sum);
                cnt=0;
                sum=0;
            }
        }
        s=p;

        
        }
        return s;
    }
};