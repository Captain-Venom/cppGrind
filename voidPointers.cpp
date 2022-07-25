#include <bits/stdc++.h>
using namespace std;


int main(){
	
    int vali=0;
    char valc='p';
    float valf=1.2;
    double vald=1.22;
   void *ptr;
   ptr=&vali;
    cout<<"value of int: "<<vali<<" its address is: "<<ptr<<" dreferencing : "<<*((int *)ptr)<<" size of pointer"<<sizeof(ptr)<<endl;
    ptr=&valc;
     cout<<"value of char: "<<valc<<" its address is: "<<ptr<<" dreferencing : "<<*((char *)ptr)<<" size of pointer"<<sizeof(ptr)<<endl;
     ptr=&valf;
      cout<<"value of int: "<<valf<<" its address is: "<<ptr<<" dreferencing : "<<*((float *)ptr)<<" size of pointer"<<sizeof(ptr)<<endl;
      ptr=&vald;
       cout<<"value of int: "<<vald<<" its address is: "<<ptr<<" dreferencing : "<<*((double *)ptr)<<" size of pointer"<<sizeof(ptr)<<endl;
    //void pointer in my compiler the typecasting gives address(adjusted according to type) only, so we can  derefence it again
    	return 0;
}