#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        int dem = 0; // dem so luong to tien 
        for(int i = 0; i < 10; i++)
        {
            dem += n/a[i];
            n %= a[i];
        }
        cout << dem << endl;
    }
}