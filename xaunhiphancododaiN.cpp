#include<bits/stdc++.h>
using namespace std;

int n, a[100], final;

void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0; --i;
    }
    if(i == 0){
        final = 0; // cau hinh cuoi cung
    }
    else a[i] = 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        final = 1;
        ktao();
        while(final){
            for(int i = 1; i <= n; i++){
                cout << a[i] << ' ';
            }
            cout << endl;
            sinh();
        }
    }
    return 0;
}