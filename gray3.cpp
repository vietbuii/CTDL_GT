#include<bits/stdc++.h>
using namespace std;

string gray3(string s)
{
    string kq= "";
    kq = s[0];
    for(int i=1; i<s.size() ;++i)
    {
        int n = kq.size()-1;
        if(kq[n] != s[i])
        {
            kq += '1';
        }
        else kq += '0';
    }
    return kq;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >>t;
    while(t--)
    {
        string s; cin >>s;
        cout << gray3(s) << '\n';
    }
}