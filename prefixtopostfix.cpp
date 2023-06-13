#include<iostream>
#include<stack>
using namespace std;

// kiem tra xem ki tu co phai toan tu khong
bool isOperator(char x){
    switch (x)
    {
    case '+':
    case '-':
    case '*':
    case '/':
        return true;
    }
    return false;
}

// ham prefixtopostfix
string pretopost(string pre_exp)
{
    stack<string>s;

    // do dai 
    int length = pre_exp.size();

    // duyet tu phai sang trai
    for(int i = length - 1 ; i >= 0 ; i--){
        // kiem tra xem ki tu co phai toan tu khong
        if(isOperator(pre_exp[i])){
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
        
        // noi toan hang voi toan tu 
        string tmp = op1 + op2 + pre_exp[i];
        // cho lai vao stack
        s.push(tmp);
        }

        else{
            s.push(string(1,pre_exp[i]));
        }
    }
    return s.top();
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string a;
        cin>>a;
        cout<<pretopost(a)<<endl;
    }
    return 0;
}
