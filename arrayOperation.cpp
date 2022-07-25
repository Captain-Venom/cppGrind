#include <bits/stdc++.h>
using namespace std;



int main(){
	int n;
    cout<<"enter the size of your array";
    cin>>n;
    const int len=n;
    int arr[len];
    do
    {
        cout<<"enter your options:\n";
        cout<<"press 1 FOr traversal\n press 2 For insertion\n press 3 for search\n press 4 for delete\n";
        int option;
        cin>>option;
        switch(option)
        {
            case(1):
            for(int i=0;i<len;i++)
            cout<<arr[i]<<" ";
            cout<<"Traversal is complete\n";
            break;
            case(2):
            cout<<"enter location(1 based indexing) and then element\n";
            int loc,ele;
            cin>>loc>>ele;
            arr[loc-1]=ele;
            break;
            case(3):
            cout<<"enter the element to be searched\n";
             ele;
            cin>>ele;
            for(int i=0;i<len;i++)
            {
                if(arr[i]==ele)
                cout<<"element "<<ele<<" found at "<<i+1<<" position\n";
            }
            break;
            case(4):
            cout<<"enter the element to be deleted\n";
            cin>>ele;
            int lsind=len-1;
            for(int i=0;i<len;i++)
            {
                if(arr[i]==ele)
                {
                    arr[i]=-1;
                    for(int j=i+1;j<=lsind;j++)
                    swap(arr[j-1],arr[j]);
                    cout<<"element deleted at pos "<<i+1<<" \n";
                    lsind--;
                    i--;
                }
            }
        }
        cout<<"do you want to continue(y|n)\n";
        char choice;
        cin>>choice;
        if(choice=='n'||choice=='N')
        break;
        }while(1);

	return 0;
}