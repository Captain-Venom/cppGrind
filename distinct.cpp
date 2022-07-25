#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int n;
	cin>>n;
	set<int> s;
	for(int i=0;i<n;i++)
	{
		int c;
		cin>>c;
		s.insert(c);
	}
	cout<<s.size()<<endl;
	
	return 0;
}