#include <bits/stdc++.h>
using namespace std;
template <class type_t>
type_t add(type_t a,type_t b)
{
    return a+b;
}
//generic programming.... using template
int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int i1=2,i2=4;
    float f1=2.0,f2=3.01;
    double d1=2.4,d2=3.009;
    cout<<add<int>(i1,i2)<<" ";
    cout<<add<float>(f1,f2)<<" ";
    cout<<add<double>(d1,d2)<<" ";

	return 0;
} 