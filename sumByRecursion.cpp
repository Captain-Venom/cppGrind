#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n%10+sum(n/10);
}

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int t;
	cin>>t;
	int ans=sum(t);
    cout<<ans;
	return 0;
}