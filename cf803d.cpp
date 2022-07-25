#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string arr[n];
    set<string> st;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        st.insert(arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        string str=arr[i];
        string h1="";
        
        int flag=0;
        for(int j=0;j<str.size()-1;j++)
        {
            h1=h1+str[j];
            string h2=str.substr(j+1,-j-1);
            if(st.find(h1)!=st.end()&&st.find(h2)!=st.end())
            {
                flag=1;
                break;
            }
        }
        cout<<flag;
    }
    cout<<endl;
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