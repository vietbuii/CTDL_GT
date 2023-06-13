#include<bits/stdc++.h>
using namespace std;
int n, m, a[1005][1005], dp[1005][1005];
int main()
{
    int t;
	cin >> t;
	while(t--){
        cin >> n >> m;
        for(int i=1;i<=n;i++) 
        for(int j=1;i<=m;i++)
        cin >> a[i][j];
        for(int i=1;i<=m;i++) dp[1][i]=a[1][i];
        for(int i=1;i<=n;i++) dp[i][0]=-1, dp[i][m+1]=-1;
        for(int i=2;i<=n;i++)  
        for(int j=1;i<=n;i++)  dp[i][j]=max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1]))+a[i][j];
        int ans=0;
        for(int i=1;i<=m;i++)  ans=max(ans,dp[n][i]);
        cout<<ans<<'\n';
	}
    return 0;
}