#include <bits/stdc++.h>
using namespace std;
void sum(int a=0,int b=0,int c=0,int d=0)
{
    cout<< (a+b+c+d)<<endl;
}//varible of call are passed  left to right hence the default varible should be allocated from right to left
template<class t,class f>
f div(t a,t b)
{
    return f(a)/f(b);
}
int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	 sum(1);
     sum(1,1);
     sum(1,1,1);
     sum(1,1,1,1);

	
	return 0;
}