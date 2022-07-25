#include <bits/stdc++.h>
using namespace std;

int main()
{ 
//     int vali=0;
//     char valc='p';
//     float valf=1.2;
//     double vald=1.22;
//    int *ptri=&vali;
//     char *ptrc=&valc;
//     float *ptrf=&valf;
//     double *ptrd=&vald;
//     cout<<"value of int: "<<vali<<" its address is: "<<ptri<<" dreferencing : "<<*ptri<<" size of pointer"<<sizeof(ptri)<<endl;
//      cout<<"value of char: "<<valc<<" its address is: "<<ptrc<<" dreferencing : "<<*ptrc<<" size of pointer"<<sizeof(ptrc)<<endl;
//       cout<<"value of int: "<<valf<<" its address is: "<<ptrf<<" dreferencing : "<<*ptrf<<" size of pointer"<<sizeof(ptrf)<<endl;
//        cout<<"value of int: "<<vald<<" its address is: "<<ptrd<<" dreferencing : "<<*ptrd<<" size of pointer"<<sizeof(ptrd)<<endl;
    // size of pointer on 32bit compiler is 4 while for 64 bit is 8.
    //ponter variable forms a referencing link;
    int var =5;
    int *ptr1=&var;
    // int *ptr2=NULL; if we do this then nothing will be printed;
    int *ptr2=ptr1;
    cout<<ptr2<<" "<<*ptr2<<endl;


    
	return 0;
}