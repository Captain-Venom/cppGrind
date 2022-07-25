#include <bits/stdc++.h>
using namespace std;
void inputValINcrement(int *rol,float *cgpa,char *gender)
{
    (*rol)++,(*cgpa)++,(*gender)++;
//just because of call ny reference the values changed here will be reflected back
//AT the main function too; size of pointer on 32bit compiler is 4 while for 64 bit is 8.
            if( *cgpa>=9) cout<<"O\n";
            else if(*cgpa<9&& *cgpa>=8)cout<<"E\n";
            else if(*cgpa<8&&*cgpa>=6)cout<<"G\n";
            else if(*cgpa<6&&*cgpa>=4)cout<<"F\n";
            else cout<<"You have to reappear your exam\n";
}
void inputVal(int *rol,float *cgpa,char *gender)
{
    cout<<"grade fot roll no "<<*rol<<" cgpa: "<<*cgpa<<" ("<<*gender<<") "<<"is ";
            if( *cgpa>=9) cout<<"O\n";
            else if(*cgpa<9&& *cgpa>=8)cout<<"E\n";
            else if(*cgpa<8&&*cgpa>=6)cout<<"G\n";
            else if(*cgpa<6&&*cgpa>=4)cout<<"F\n";
            else cout<<"You have to reappear your exam\n";
           
}

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int t;
	cin>>t;
	int rolln;
    float cgpa;
    char gender;
    cin>>rolln>>cgpa>>gender;
    inputVal(&rolln,&cgpa,&gender);
    inputValINcrement(&rolln,&cgpa,&gender);
    cout<<"grade fot roll no "<<rolln<<" cgpa: "<<cgpa<<" ("<<gender<<") "<<"is after increment\n";

	return 0;
}