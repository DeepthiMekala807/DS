#include <iostream>
#include <stack>
#include <string>
using namespace std;

class validity {
public:
    bool valid(string str) {
        stack<char> st;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '{' || str[i] == '[' || str[i] == '(') {
                st.push(str[i]);
            } else {
                if (st.empty()) {
                    return false;
                } else {
                    if ((st.top() == '{' && str[i] == '}') || 
                        (st.top() == '[' && str[i] == ']') || 
                        (st.top() == '(' && str[i] == ')')) {
                        st.pop();
                    } else {
                        return false;
                    }
                }
            }
        }

        return st.empty();
    }
};

int main() {
    string expression;
    cin >> expression;

    validity validator; // Create an instance of the vp class
    if (validator.valid(expression)) {
        cout << "Valid expression" << endl;
    } else {
        cout << "Invalid expression" << endl;
    }

    return 0;
}