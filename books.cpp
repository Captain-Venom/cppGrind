// // A book shop maintains the inventory of books that are being sold at the shop
//  the list includes details such as author, title, price, publisher and stock positions.
//   Whenever a customer wants a book, the salesperson input see title and author and the 
//   system searches the list and displays whether it is a valid or not able. If it is not,
//    an appropriate message is displayed. If it is, then system displays the book details and 
//    requests for the number of copies required. If the required copies are available,
//     the total cost of the requested copies is displayed; otherwise the message reqd copies not in stock is displayed
#include <bits/stdc++.h>
using namespace std;
class book
{
    string author;
    string title;
    string publisher;  
    float price;
    int stock;
    public:
    book()
    {
        cout<<"Enter the author name: ";
        cin>>author;
        cout<<"Enter the title name: ";
        cin>>title;
        cout<<"Enter the prce of book: ";
        cin>>price;
        cout<<"Enter the stock of your book: ";
        cin>>stock;
    }
    string getAuthor()
    {
        return author;
    }
    string getTitle()
    {
        return title;
    }
    string getPublisher()
    {
        return publisher;
    }
    float getPrice()
    {
        return price;
    }
    int getStock()
    {
        return stock;
    }
    void updateStock(int stk)
    {
        stock-=stk;
    }

};
class sales
{
    book bklist[2];
    public:
    int search(string ttl,string auth)
    {
        
       int k=-1;
       for(int i=0;i<2;i++)
       {
           if(bklist[i].getTitle()==ttl&&bklist[i].getAuthor()==auth)
           {
               k=i;
               break;
           }
       }
       return k;
    }
    void dispalyele(int k)
    {
        cout<<"book name: "<<bklist[k].getTitle()<<endl<<"author: "<<bklist[k].getAuthor()<<"\npublished by: "<<bklist[k].getPublisher()<<"\nprice: "<<bklist[k].getPrice()<<"\n available stock: "<<bklist[k].getStock()<<endl;
           
    }
    void checkCopies(int k)
    {
        cout<<"enter the number of copies you require ";
           int cop;
           cin>>cop;
           if(cop<=bklist[k].getStock())
           {
               cout<<"\ntotal cost->"<<cop*bklist[k].getPrice()<<endl;
               bklist[k].updateStock(cop);
               cout<<"stock changed to "<<bklist[k].getStock();
           }
           else{
               cout<<"\n we are sorry to sasy that the current our current stock of this book cannot suffice your need.";
           }
    }
};

int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
    const int N=2;
	sales s;


    do
    {
       cout<<"Enter the book and author name ";
       string bk,auth;
       cin>>bk>>auth;
       int k=s.search(bk,auth);
       if(k!=-1)
       {
           s.dispalyele(k);
           cout<<endl;
           s.checkCopies(k);
       }
       else
       {
           cout<<"Book is not Available\n";
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