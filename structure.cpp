#include <bits/stdc++.h>
using namespace std;
struct emp
{
    string name;
    int salary;
    short age;
};

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int t;
    cout<<"enter the no of employee ";
	cin>>t;
    emp arr[t];
	for(int i=0;i<t;i++)
    {
        cout<<"enter the value of "<<i+1<<" entry:\n";
        cout<<"enter the name ";
        cin>>arr[i].name;
        cout<<"\n enter salary and age ";
        cin>>arr[i].salary>>arr[i].age;

    }
    emp *add=&arr[0];
    cout<<sizeof(arr[0])<<endl;
    cout<<(*add).name<<endl;
    // while(1)
    // {
    //     int k;
    //     cout<<"enter the id of employyee to be found\n";
    //     cin>>k;
    //     if(k-1<t)
    //     {
    //         cout<<arr[k-1].name<<" "<<arr[k-1].salary<<" "<<arr[k-1].age<<endl;
    //     }
    //     cout<<"want to continue(Y|N)"<<endl;
    //     char c;
    //     cin>>c;
    //     if(c=='N'||c=='n') break;
    // }
	return 0;
}