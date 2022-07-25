#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int sec;
    cout<<"Emter seconds ";
    cin>>sec;
    cout<<sec/3600<<" "<<((sec%3600)-sec%60)/60<<" "  <<sec%60<<" "<<endl;
    int hour=sec/3660;
    sec=sec%3600;
    int mins=sec/60;
    sec=sec%60;
    cout<<"hours: "<<hour<<", min:  "<<mins<<" seconds remain: "<<sec<<endl;
    
	return 0;
}