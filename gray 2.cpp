#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        for(int i = 1; i <= s.size(); i++)
        {
            if(i == 1)
            {
                cout << s[i];
            }
        }
             else
            {
                if(s[i] != s[i-1]) cout << 1;
                else cout << 0;
            }
        cout << endl;
    }

}