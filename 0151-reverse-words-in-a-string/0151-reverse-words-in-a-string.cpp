#include <stack>
#include <string>

class Solution {
public:
    string reverseWords(string s) {
        string ans;
        stack<string> st;
        int i = 0;
        int n = s.size();
        
        while (i < n) {
            while (i < n && s[i] == ' ') {
                i++; // Skip leading spaces
            }
            string p;
            while (i < n && s[i] != ' ') {
                p += s[i];
                i++;
            }
            if (!p.empty()) {
                st.push(p);
            }
        }
        
        while (!st.empty()) {
            ans += st.top();
            st.pop();
            if (!st.empty()) {
                ans += " ";
            }
        }
        
        return ans;
    }
};
