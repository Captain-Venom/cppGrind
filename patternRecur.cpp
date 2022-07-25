#include <bits/stdc++.h>
using namespace std;
void solve(int t)
{
    if(t==0)
    return;
    solve(t-1);
    for(int i=0;i<t;i++)
    cout<<"*";
    cout<<endl;
}
void rev_solve(int t)
{
    
    for(int i=0;i<t;i++)
    cout<<"*";
    cout<<endl;
    if(t==0)
    return;
    rev_solve(t-1);
}
void space(int t,int n)
{
    if(t==0)
    return;
    space(t-1,n);
    for(int i=0;i<n;i++)
    {
        if(i<(n-t))
        cout<<" ";
        else
        cout<<"*";
    }
    cout<<endl;
}
void spaceadv(int t,int n)
{
    if(t==0)
    return;
    spaceadv(t-1,n);
    for(int i=0;i<n;i++)
    {
        if(i<(n-t))
        cout<<" ";
        else
        cout<<"* ";
    }
    cout<<endl;
}

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int t;
	cin>>t;
	
	    solve(t);
        cout<<"----------\n";
        rev_solve(t);
         cout<<"----------\n";
        space(t,t);
        cout<<"----------\n";
        spaceadv(t,t);
	
	return 0;
}