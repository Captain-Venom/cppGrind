#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	float far;
    cout<<"Enter the fahrenheit value\n";
    cin>>far;
    float cel=((far-32)*5)/9;
    cout<<"your celsius value is "<<cel<<endl;
	return 0;
}