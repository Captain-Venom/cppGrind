// // A book shop maintains the inventory of books that are being sold at the shop
//  the list includes details such as author, title, price, publisher and stock positions.
//   Whenever a customer wants a book, the salesperson input see title and author and the 
//   system searches the list and displays whether it is a valid or not able. If it is not,
//    an appropriate message is displayed. If it is, then system displays the book details and 
//    requests for the number of copies required. If the required copies are available,
//     the total cost of the requested copies is displayed; otherwise the message reqd copies not in stock is displayed
#include <bits/stdc++.h>
using namespace std;
struct book
{
    string author;
    string title;
    string publisher;
    
    float price;
    int stock;

};

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	book lib[5];
    //input of each elenment
    lib[0].author="aa",lib[0].title="jun",lib[0].publisher="jk.co",lib[0].price=88.0,lib[0].stock=55;
    lib[1].author="bb",lib[1].title="jun",lib[1].publisher="jk/co",lib[1].price=99.0,lib[1].stock=5;
    lib[2].author="cc",lib[2].title="kin",lib[2].publisher="ww.co",lib[2].price=100.0,lib[2].stock=99;
    lib[3].author="aa",lib[3].title="dun",lib[3].publisher="prnt.h",lib[3].price=72.0,lib[3].stock=11;
    lib[4].author="kk",lib[4].title="jum",lib[4].publisher="pz,s",lib[4].price=546,lib[4].stock=40;

    do
    {
       int n;
       string bk,auth;
       cout<<"enter the book name and author  ";
       cin>>bk>>auth;
       int k=-1;
       for(int i=0;i<5;i++)
       {
           if(lib[i].title==bk&&lib[i].author==auth)
           {
               k=i;
               break;
           }
       }
       if(k==-1)
       cout<<"Sorry but we dont have this book..... yet\n";
       else
       {
           cout<<"book name:"<<lib[k].title<<endl<<"author: "<<lib[k].author<<"\npublished by: "<<lib[k].publisher<<"\nprice: "<<lib[k].price<<"\n available stock"<<lib[k].stock<<endl;
           cout<<"enter the number of copies you require ";
           int cop;
           cin>>cop;
           if(cop<=lib[k].stock)
           {
               cout<<"\ntotal cost->"<<cop*lib[k].price<<endl;
               lib[k].stock-=cop;
           }
           else{
               cout<<"\n we are sorry to sasy that the current our current stock of this book cannot suffice your need.";
           }
       }
       cout<<"\ndo you wish to continue(Y|N)  ";
       char ch;
       cin>>ch;
       if(ch=='N'||ch=='n')
       {
           break;
       }
    } while (1);
    
	return 0;
}