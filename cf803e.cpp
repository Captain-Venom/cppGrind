#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>arr[i][j];
    int add[]={n-1,n-1,-n+1,-n+1};
    int str=0,stc=0;
    int l=n-1;
    int ans=0;
    for(int k=0;k<n/2;k++)
    {
        
        for(int j=0;j<l;j++)
        {
            int one=0,zero=0;
            int r=str+j,c=stc;
            for(int i=0;i<=3;i++)
            {
                if(arr[r][c]==0)
                zero++;
                else
                one++;
                if(i%2!=1)
                r+=add[i];
                else
                c+=add[i];
            }
            ans+=min(one,zero);
        }
        l-=2;
        str=k;
        stc=k;
        for(int i=0;i<4;i++)
        {
            if(i%2!=1)
            add[i]=l;
            else
            add[i]=-l;
        }
    }
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