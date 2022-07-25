#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
void solve()
{
    int n,k;
    cin>>n>>k;
    long long t=(1ll<<(k))%mod;
    long long ans=(((((n)*(n-1))%mod)*(t))%mod)/2;
    cout<<ans<<endl;
}

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}