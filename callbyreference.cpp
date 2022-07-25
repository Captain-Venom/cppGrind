#include <bits/stdc++.h>
using namespace std;
void solve(int *a,int *b)//pointer type values are catching your adrresses h
{                        //hence causing pointer link connection
    *a=(*a)++;
    *b=(*b)++;
    cout<<"[";
}

int main(){

	int a=7;
    int b=9;
	cout<<3;
	solve(&a,&b);//addressess are passed here
    
    cout<<a<<" "<<b;
	
	return 0;
}