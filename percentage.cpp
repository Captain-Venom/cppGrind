#include <bits/stdc++.h>
using namespace std;
float calpercent(int *marks,int *maxmarks,float* percent)
{
    *percent= ((float)(*marks)/(float)(*maxmarks))*100;
}

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int marks,maxmarks;
    float percentage;
	cin>>marks>>maxmarks;
      calpercent(&marks,&maxmarks,&percentage);
    cout<<percentage<<endl;
	
	return 0;
}