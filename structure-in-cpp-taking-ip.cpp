#include<iostream>
using namespace std;
struct Book 
{
    int bookid;
    char titel[20];
    float price;

};
struct Book inputBook()

{
    struct Book b;
    cout<<"Enter bookid,titel,price = ";
    cin>>b.bookid;
    cin.ignore();
    cin.getline(b.titel,20);
    cin>>b.price;
    return b;
}
void displayBook(struct Book b)
{
    cout<<b.bookid<<" ";
    cout<<b.titel<<" ";
    cout<<b.price;
    cout<<endl;
}
int main()
{
    struct Book b1 ={20, "data structute",1000.7f};
    struct Book b2;
    b2=inputBook();
    displayBook(b1);
    displayBook(b2);
    cout<<endl;
    return 0;
}

/*
i/p-- Enter bookid,titel,price = 10
c in depth
500 

o/p-- 20 data structute 1000.7
10 c in depth 500.5
*/