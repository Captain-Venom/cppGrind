#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    for(;i<(n)/2;i++)
    {
        cout<<arr[i]<<" "<<arr[n-i-1]<<"\n";
    }
    if(arr[i]==arr[n-i-1])
   
    cout<<arr[i]<<" "<<"--\n";
    
}

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	solve();
	return 0;
}