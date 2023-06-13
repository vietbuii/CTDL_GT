#include<bits/stdc++.h>
using namespace std;

int n , a[100], ok;
// khoi tao ham 
void create(){
    for(int i = 1; i <=n ; i++){
        a[i] = i;
    }
}

// sinh hoan vi
void sinh(){
    int i = n - 1;
    while(i >= 1  && a[i] > a[i + 1]) // tim gtri a[i] < a[i+1]
    { 
        --i;
    }
    if(i == 0) // cau hinh cuoi cung 
        {
            ok = 0;
        } 
    else { // tiep tuc tim cau hinh tiep theo
        int j = n;
        while(a[i] > a[j]) --j;
        swap (a[i] , a[j]);
        int l = i+1 , r = n;
        while(l<r)
        { 
            swap(a[l] , a[r]); 
            ++l; --r;
        } // doi nguoc mang thanh tu be den lon 
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok = 1; 
        create();
        while(ok){
        for(int i = 1; i<=n; i++){
            cout << a[i] ;
        }
        cout << ' ';
        sinh();
    }
		cout << endl;
    }
    return 0;
}