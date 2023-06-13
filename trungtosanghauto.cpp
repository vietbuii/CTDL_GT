#include <bits/stdc++.h>
using namespace std;
  
// Hàm thứ tự ưu tiên 
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
  
// hàm chuyển từ trung tố sang hậu tố
void infixToPostfix(string s)
{
  
    stack<char> st;
    string result;
  
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
  
        // nếu là toán hạng thì in ra hậu tố
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9'))
            result += c;
  
        // đẩy "(" vào stack
        else if (c == '(')
            st.push('(');
  
        // nếu gặp ")" pop hết các phần tử trong stack cho đến khi gặp "("
        else if (c == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
  
        // Quet
        else{
            while (!st.empty() && prec(s[i]) <= prec(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
  
    // Pop hết tất cả các phần tử ra khỏi ngăn xếp
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
  
    cout << result << endl;
}
  
// Hàm main
int main(){
    int t;
    cin >> t;
    while (t--)
{
    string s;
    cin >> s;
  
    // Gọi hàm
    infixToPostfix(s);
    
    return 0;
    }
}
