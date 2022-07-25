#include <bits/stdc++.h>
using namespace std;
class test{
    int marks;
    public:
    test(int i=0)
    {
        marks=i;
    }
    void display(void)
    {
        cout<<"marks is: "<<marks<<endl;
    }
};

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
    
	test obj(1000);
    obj.display();
    test *ptr=&obj;
    ptr->display();
    cout<<"address of obj "<<&obj<<","<<ptr<<" address of ptr is "<<&ptr<<endl;
    
    cout<<"size of obj "<<sizeof(obj)<<", size of class ."<<sizeof(test)<<" a of ptr is "<<sizeof(ptr)<<endl;

	return 0;
}