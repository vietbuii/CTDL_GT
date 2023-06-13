#include<bits/stdc++.h>
using namespace std;

long long p = 1000000007;
long long pow(long long a, long long n)
{
    if(n == 0) return 1;
    if(n == 1) return a;
    long long x = pow(a,n/2);
    if(n%2==0) return (x*x)%p;
    else return (a*((x*x)%p))%p;
}

int main()
{
    int t;
    cin >> t;
    long long a,n;
    while(t--)
    {
        cin >>a >>n;
        cout << pow(a,n)<< endl;
    }
    return 0;
}