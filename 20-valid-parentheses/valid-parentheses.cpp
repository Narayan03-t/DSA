class Solution {
public:
    bool isValid(string s) {
        stack<char> st;  // Initialize a stack to store opening brackets

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);  // Push opening brackets onto the stack
            } else {
                if (st.empty()) {
                    return false;  // No matching opening bracket
                }
                char top = st.top();  // Get the top element of the stack
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;  // Mismatched brackets
                }
                st.pop();  // Pop the matching opening bracket
            }
        }

        return st.empty();
    }
};