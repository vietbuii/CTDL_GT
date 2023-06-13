#include <bits/stdc++.h>
using namespace std;

string gray(string s){
    string kq;
    kq += s[0];
    for(int i = 1; i < s.size(); ++i)
    {
        if(s[i] != s[i-1])
        {
            kq += '1';
        }
        else kq +='0';
    }
    return kq;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
	int t;
	cin >> t;
	while (t--){
        string s;
        cin >>s;
        cout <<gray(s) <<'\n';
    }
	return 0;
}