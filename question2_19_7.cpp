#include <bits/stdc++.h>
using namespace std;
void solve()
{
   
   int inp[5];
   cout<<"how many TVs were sold?\n";
   cin>>inp[0];
   cout<<"how many VCRs were sold?\n";
   cin>>inp[1];
   cout<<"how many Remote COntrolls were sold?\n";
   cin>>inp[2];
   cout<<"how many CDs were sold?\n";
   cin>>inp[3];
   cout<<"how many Tape Records were sold?\n";
   cin>>inp[4];
   float arr[]={400,220,35.20,300,150};
   float sum=0;
   string s[5]={"TVs","VCRs","Remote Controlls","CDs","Tape Records"};
   for(int i=0;i<5;i++)
   {
       cout<<"No of "<<setw(16)<<setfill(' ')<<s[i]<<" sold "<<setw(5)<<setfill('0')<<arr[i]<<" amount got after selling it "<<setw(8)<<setfill('0')<<arr[i]*inp[i]<<endl;
       sum+=(arr[i]*inp[i]);
   }
   
   cout<<setw(40)<<setfill('*')<<"total sub total of cost ";
   cout<<setw(7)<<setfill('0')<<sum<<endl;
   cout<<setw(40)<<setfill('*')<<"total cost after sale tax ";
   cout<<setw(7)<<setfill('0')<<float(sum*(1.0825));

}

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int t;
	solve();
	return 0;
}