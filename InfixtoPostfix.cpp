#include<bits/stdc++.h>
using namespace std;

// tao ham uu tien 
int pri(char c)
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

// tao ham chuyen trung to sang hau to
void InfixtoPostfix(string s){
    stack <char>st;
    string result;

    for(int i=0;i<=s.length();i++){
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            result += c;

    // day dau "(" vao stack
        else if (c == '(')
            st.push('(');   
    
    // neu gap dau ')' thi pop cac phan tu trong stack den khi gap dau '(' thi dung 
        else if (c == ')')  {
            while(st.top() != '('){
                result += st.top();
                st.pop();
            }     
            st.pop();              
        }
    //quet tiep 
        else {
            while (!st.empty() && pri(s[i]) <= pri(st.top())){
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    //pop het phan tu con lai ra khoi stack 
            while(!st.empty()){
                result += st.top();
                st.pop();
            }
            cout << result ;
}            
int main(){
    int t; cin >> t;
    while (t--){
        string s;
        cin >> s;
        InfixtoPostfix(s);
    }
return 0;
}