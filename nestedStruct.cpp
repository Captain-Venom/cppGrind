#include <bits/stdc++.h>
using namespace std;
struct stu
{
    string name;
    int roll;
};
struct movies
{
    string name;
    stu student;


};

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	movies m;
    m.name="yoyo";
    m.student.name="ramesh";
    m.student.roll=22;
    cout<<m.name<<" "<<m.student.name<<": "<<m.student.roll<<endl;  
	return 0;
}