#include <bits/stdc++.h>
using namespace std;
void add(int a,int b)
{
    cout<<a+b<<" ";
}
void add(float a,float b)
{
    cout<<a+b<<" ";
}
void add(double a,double b)
{
    cout<<a+b<<" ";
}

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int i1,i2;
    cin>>i1>>i2;
    add(i1,i2);
    float f1,f2;
    cin>>f1>>f2;
    add(f1,f2);
    double d1,d2;
    cin>>d1>>d2;
    add(d1,d2);

	
	return 0;
} 