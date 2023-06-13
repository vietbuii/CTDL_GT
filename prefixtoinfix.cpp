#include<iostream>
#include<stack>
const int MOD=1e9+7;
using namespace std;

string ts = "+-*/";
bool isOperator(char c){
    for (int i = 0; i < ts.size(); i++)
        if (ts[i] == c)
            return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s,k;
        cin >> s;
        stack <string> st;
        for (int i = 0; i< s.size(); i++){
            if(isOperator(s[i])){
                k = st.top();
                st.pop();
                k = s[i] + k;
                k = st.top() + k;
                st.pop();
                k = "(" + k + ")";
                st.push(k);

            }
            else{
                st.push(string(1,s[i]));
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}
 
 