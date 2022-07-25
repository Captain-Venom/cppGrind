#include <bits/stdc++.h>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int subs(int a,int b)
{
    return abs(a-b);
}
int multiply(int a,int b)
{
    return a*b;
}
int divide(int a,int b)
{
    if(b!=0)
    return a/b;
    else 
    return -1;
}

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	
	while(1)
	{
        cout<<"enter your numbers ";
        int a,b;
        cin>>a>>b;
        cout<<"\nenter your desired operator:\n 1 for addition \n 2 for subs \n 3 for multiplication \n 4 for division\n";
        int t;
        cin>>t;
	    switch(t)
        {
            case 1:
            cout<<"result for addition "<<add(a,b);
            break;
            case 2:
            cout<<"result for substraction "<<subs(a,b);
            break;
            case 3:
            cout<<"result for addition "<<multiply(a,b);
            break;
            case 4:
            cout<<"result for division "<<divide(a,b);
            break;
            default:
            cout<<"you entered wrong input\n";
            
        }
        cout<<"\n do you wish to continue?(y/n) ";
        char ch;
        cin>>ch;
        cout<<endl;
        if(ch=='n'||ch=='N')
        break;
	}
	return 0;
}