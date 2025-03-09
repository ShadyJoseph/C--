#include <iostream>
#include <stack>

using namespace std;

    bool isValidP(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);  // Push opening brackets
            } else {
                if (st.empty()) return false; // Extra closing bracket
                if ((c == ')' && st.top() != '(') ||
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')) {
                    return false; // Mismatched brackets
                }
                st.pop(); // Valid match, remove from stack
            }
        }

        return st.empty(); // Stack should be empty if brackets are balanced
    }