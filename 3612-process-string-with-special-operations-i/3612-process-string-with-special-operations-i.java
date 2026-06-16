class Solution {
    public String processStr(String s) {
        StringBuilder z = new StringBuilder();

        for (char c : s.toCharArray()) {
            if (c >= 'a' && c <= 'z') {
                z.append(c);
            } else if (c == '#') {
                z.append(z.toString());
            } else if (c == '*') {
                if (z.length() > 0) {
                    z.deleteCharAt(z.length() - 1);
                }
            } else if (c == '%') {
                z.reverse();
            }
        }

        return z.toString();
    }
}