#include <bits/stdc++.h>
using namespace std;
struct emp
{
    string name;
    int salary;
    short age;
    emp* link;
};

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	emp e1;
    emp e2;
    
    e1.name="reshav";
    e1.salary=100000000;
    e1.age=20;
    e1.link=&e2;
    e2.name="Bhalu";
    e2.salary=10000;
    e2.age=20;
    e2.link=&e1;
    emp *ptr1=&e1;
    emp *ptr2=&e2;
    cout<<e1.name<<"  "<<ptr1->name<<" "<<(*ptr1).name<<" "<<(e2.link)->name<<"  "<<ptr2->link->name<<"  "<<(*((*ptr2).link)).name ;
    //we can use -> for pointers to use the attribute of its stored address's element or can use old fashioned dereferecing(good luck with that though).
	return 0;
}