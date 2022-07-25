#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int N,M;
    cout<<"enter n and m";
    cin>>N>>M;
    const int n=N ,m=M;
    int arr[n][m];
    while(1)
    {

        int sum=0;
    int flag=0;
    for(int i=0;i<n;i++)
    { int sumr=0;
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            sumr+=arr[i][j];
        }
        if(flag&&sumr%15!=0)
        {
            flag=i;
        }

        sum+=sumr;
    }
    if(sum>300)
    {
        if(flag)
        {
            cout<<"the sum of  row "<<flag+1<<" is not the multiple of 3 and 5, hence enter again\n";
            continue;
        }
        else
        {
            cout<<"GG";
            break;
        }
    }
    
    cout<<"enter the element again because toatal sum of elements is less that 300\n";
    }
}

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	solve();
	return 0;
}