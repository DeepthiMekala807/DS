#include <iostream>
#include <stack>
#include <string>

class Sol {
public:
    int longestParenthesis(std::string s) {
        std::stack<int> st;
        st.push(-1);
        int maxl = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    st.push(i);
                } else {
                    int len = i - st.top();
                    maxl = std::max(maxl, len);
                }
            }
        }
        return maxl;
    }
};

int main() {
    Sol sol;
    
    std::string input = "(()())";
    std::cout << input << "\": " << sol.longestParenthesis(input) << std::endl;

    return 0;
}