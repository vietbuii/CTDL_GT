#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >>n;
		int a[n+5];
		for(int i = 1; i <= n; ++i) a[i] = 0;
        int ok = 1;
        while(ok){
            for(int i = 1; i <= n; ++i) cout <<char(a[i]+65);
            cout <<' ';
            int i = n;
            while(i > 0 && a[i] == 1) a[i] = 0, i--;
            if(i == 0) ok = 0;
            else a[i] = 1;
        }
		cout <<'\n';
	}
    return 0;
}

// int n, a[100], ok;

// void ktao(){
//     for(int i = 1;i<=n; i++){
//         a[i] = 0;
//     }
// }

// void xuat(){
//     for(int i = 1; i <= n ; i++){
//         if(a[i]==0) cout << "A";
//         else cout << "B";
//     }
//     cout << ' ';
// }

// void sinh(){
//     int i = n;
//     while (i >= 1 && a[i] == 1){
//         a[i] = 0; --i;
//     }
//     if (i == 0){
//         ok = 0; // cau hinh cuoi cung
//     }
//     else{
//         a[i] = 1;
//     }
// }

// int main(){
//     int t; cin >> t;
//     while(t--){
//         cin >> n;
//         ok = 1;
//         ktao();
//         while(ok){
//         xuat();
//         sinh();
//         }  
//    } 
//    return 0;
// }  