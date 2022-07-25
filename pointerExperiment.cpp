#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int x=0;
    int y=99;
	// cin>>x;
	int *p1=&x;
    const int *p2=&x;//this value will be read only..
    // *p2=10;error: assignment of read-only location '* p2'
    p2=&y;//doesnt invoke an error
    int * const p3=&x;
    *p3=10;//doesnt give you error but....
    // p3=&y;error: assignment of read-only variable 'p3'
    const int* const p4=&x;

    cout<<*p2<<" \n";
    *p1=200;
    cout<<*p1<<" \n";
	return 0;
}