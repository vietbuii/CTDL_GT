#include<bits/stdc++.h>
using namespace std;

string a,b;
string Sum()
{
    while(a.size() < b.size()) a = '0'+a;
    while(b.size() < a.size()) b = '0'+b;
    int length = a.size();
    string kq="";
    int nho=0;
    for(int i=length-1;i >=0;i--)
    {
        int so = int(a[i]-'0') + int(b[i] -'0') + nho;
        kq = char(so%10 + '0') + kq;
        nho = so/10;
    }
    if(nho>0) return char(nho+'0') + kq;
    return kq;
}

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        cin >>a,b;
        for(int i = 0; i < a.size(); i++) 
            if(a[i]=='5') a[i] =3;
        for(int i = 0; i < b.size(); i++) 
            if(b[i]=='5') b[i] =3;
        cout << Sum() << ' ';

        //
        for(int i = 0; i < a.size(); i++) 
            if(a[i]=='3') a[i] =5;
        for(int i = 0; i < b.size(); i++) 
            if(b[i]=='3') b[i] =5;
        cout << Sum() << endl;
    }
}