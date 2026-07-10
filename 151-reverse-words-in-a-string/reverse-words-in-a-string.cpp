class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;

        for (int i = 0; i < s.length(); i++) {

            while (i < s.length() && s[i] == ' ')
                i++;

            string temp = "";

            while (i < s.length() && s[i] != ' ') {
                temp += s[i];
                i++;
            }

            if (!temp.empty())
                st.push(temp);
        }

        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();

            if (!st.empty())
                ans += " ";
        }

        return ans;
    }
};