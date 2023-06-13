#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i = 0; i < n; ++i) cin >>a[i];
        if(next_permutation(a,a+n)) 
        for(int i = 0; i < n; ++i) cout <<a[i] <<' ';
        else for(int i = 0; i < n; ++i) cout <<i+1 <<' ';
        cout <<'\n';
    }
    return 0;
}
