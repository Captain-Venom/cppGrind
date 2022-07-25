#include <bits/stdc++.h>
using namespace std;
int add(int f,int s)
{
    return f+s;
}
int add(int f,int s,int x)
{
    return f+s+x;
}
int sub(int i,int s)
{
    return i-s;
}
int sub(int i,int s,int x)
{
    return i-s-x;
}
int operation(int x,int y,int(*function)(int ,int))
{
    int s=(*function)(x,y);
    return s;
}
int operation(int x,int y,int z,int(*function)(int ,int,int))//check for void argument
{
    int s=(*function)(x,y,z);
    return s;
}
int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	int a=9,b=8;
    cout<<"\nADD2: "<<operation(a,b,add);
    cout<<"\nSUB2: "<<operation(a,b,sub);
    int c=10;
    cout<<"\nADD3: "<<operation(a,b,c,add);
    cout<<"\nSUB3: "<<operation(a,b,c,sub);
    //via array of function pointer
    // int(*arrayFunc[])(int,int)={add,sub};
    // cout<<"ADD(via array pointer) "<<*arrayFunc[0](a,b));
    // cout<<"ADD(via array pointer) "<<(*arrayFunc[1](a,b));
	return 0;
}