class Solution {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack<>();

        for (char c : s.toCharArray()) {
            st.push(c);

            if (st.size() >= 3) {
                char c3 = st.pop();
                char c2 = st.pop();
                char c1 = st.pop();

                if (!(c1 == 'a' && c2 == 'b' && c3 == 'c')) {
                    st.push(c1);
                    st.push(c2);
                    st.push(c3);
                }
            }
        }

        return st.isEmpty();
    }
}