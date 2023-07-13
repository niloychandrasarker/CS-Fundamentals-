#include <iostream>
#include <string>
#include <stack>

std::string getFinalColors(const std::string& colors) {
    std::stack<char> st;

    for (char color : colors) {
        if (!st.empty()) {
            char prevColor = st.top();

            if ((color == 'B' && prevColor == 'R') || (color == 'R' && prevColor == 'B')) {
                st.pop();
                st.push('P');
            } else if ((color == 'G' && prevColor == 'R') || (color == 'R' && prevColor == 'G')) {
                st.pop();
                st.push('Y');
            } else if ((color == 'G' && prevColor == 'B') || (color == 'B' && prevColor == 'G')) {
                st.pop();
                st.push('C');
            } else {
                st.push(color);
            }
        } else {
            st.push(color);
        }
    }

    std::string result;
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }

    std::string finalResult;
    char prevColor = '\0';
    for (char color : result) {
        if (color != prevColor) {
            finalResult += color;
            prevColor = color;
        }
    }

    return finalResult;
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N;
        std::cin >> N;

        std::string colors;
        std::cin >> colors;

        std::string finalColors = getFinalColors(colors);
        std::cout << finalColors << std::endl;
    }

    return 0;
}
