class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto i:s){
            st.push(i);
            if (st.size() >= 3) {
            char c3=st.top();st.pop();
            char c2=st.top();st.pop();
            char c1=st.top();st.pop();
            if(!(c3=='c' && c2=='b' &&c1=='a')){
                st.push(c1);
                st.push(c2);
                st.push(c3);
            }
            }
        }
        return st.empty();
    }
};