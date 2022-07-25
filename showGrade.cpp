#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	// float cgpa;
    int t;
    cout<<"Enter the no of students \n";
    cin>>t;
    while(t--)
    {
            int cgpa;
            // cout<<"enter your grade ";
            cin>>cgpa;
            // if(cgpa<=10&&cgpa>=9) cout<<"O\n";
            // else if(cgpa<9&&cgpa>=8)cout<<"E\n";
            // else if(cgpa<8&&cgpa>=6)cout<<"G\n";
            // else if(cgpa<6&&cgpa>=4)cout<<"F\n";
            // else cout<<"You have to reappear your exam\n";
            switch(cgpa)
            {
                case 10:
                cout<<"Outstanding\n";
                break;
                case 9:
                cout<<"E\n";
                break;
                case 8:
                cout<<"VG\n";
                break;
                case 7:
                cout<<"G\n";
                break;
                case 6:
                cout<<"satisfactory\n";
                break;
                case 5:
                cout<<"Acceptable\n";
                break;
                default:
                cout<<"reappear\n";
            }
    }

	
	return 0;
}