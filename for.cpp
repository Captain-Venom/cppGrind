#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        int cgpa;
            cout<<"enter your grade ";
            cin>>cgpa;
            if(cgpa<=10&&cgpa>=9) cout<<"O\n";
            else if(cgpa<9&&cgpa>=8)cout<<"E\n";
            else if(cgpa<8&&cgpa>=6)cout<<"G\n";
            else if(cgpa<6&&cgpa>=4)cout<<"F\n";
            else cout<<"You have to reappear your exam\n";
    }
	return 0;
} 