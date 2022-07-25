//this is a special pointer which gives the address of an object which is currently invocking the class/function
#include <bits/stdc++.h>
using namespace std;
class test
{
    int marks;
    public:
    test(int i=0)
    {
        marks=i;
    }
    void compare(test obj)
    {
        if(this->marks>obj.marks)//this  pointer is used
        {
            cout<<"this pointer is "<<(*this).marks<<" "<<this->marks;
            cout<<"\ncurrent object is greater than compared object\n";
        }
        else
        {
             cout<<"this pointer is "<<(*this).marks<<" "<<this->marks;
            cout<<"\ncurrent object is not greater than compared object\n";
        }
    }
};

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	test obj1(1000),obj2(500);
    obj1.compare(obj2);
    obj2.compare(obj1);
	return 0;
}