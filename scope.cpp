#include <bits/stdc++.h>
using namespace std;

int a=3;
int main(){
    cout<<"value os a "<<a<<endl;
	int a=10;
    cout<<"value os a "<<a<<endl;
    {
        a=20;
        cout<<"value of a "<<a<<endl;
        cout<<"value of global a "<<::a<<endl;
    }
    cout<<"value os a "<<a<<endl;
	return 0;
}