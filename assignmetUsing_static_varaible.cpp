#include <bits/stdc++.h>
using namespace std;
class student
{
    int admNo;
    string name;
    int mrk[3];
    int total;
    float per;
   
    
    // enum sub{english,maths,science};

    public:
     static int number;
        student()
        {
            number++;
            cout<<"\nenter the admission number of student ";
            cin>>admNo;
            cout<<"\nenter the name of student ";
            cin>>name;
            cout<<"\nenter the marks of english subject ";
            cin>>mrk[0];
            cout<<"\nenter the marks of maths subject ";
            cin>>mrk[1];
            cout<<"\nenter the marks of science subject ";
            cin>>mrk[2];
            // total=0;
            // per=0;

        }
        void calculateTotal()
        {
            this->total=0;
            for(int i=0;i<3;i++)
            this->total+=(this->mrk[i]);
            this->per=float(this->total)/3.0;
        }
        void display()
        {
            cout<<"\nname and roll no of student "<<name<<" "<<admNo<<endl;
            cout<<"\n marks in english science and maths "<<mrk[0]<<" "<<mrk[1]<<" "<<mrk[2]<<endl;
            cout<<"\n total marks calculated "<<total<<endl;
            cout<<"\n percentage scored "<<per<<endl;
        }
        static void printNumber()
        {
            cout<<"\nnumber of students entered till now is "<<number<<endl;
        }



};
int student:: number;//for static variable

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	
	while(true)
	{
        student obj;
        obj.calculateTotal();
        obj.display();
        student::printNumber();//for static function
	   char ch;
	   cout<<"do you wish to continue?(Y|N)";
       cin>>ch;
       if(ch=='n'||ch=='N')
       break;
	}
	return 0;
}