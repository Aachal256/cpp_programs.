// WAP to swap two numbers using pointers 
/* without using third variable */

#include<iostream>
using namespace std;
int main()
{
    int a,b,*p1,*p2;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    p1=&a;
    p2=&b;

    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;

    cout<<"After swapping"<<endl;
    cout<<"Values of a="<<a<<endl;
    cout<<"values of b="<<b;
    return 0;
}

/*

o/p-   Enter two numbers:10 20
       After swapping
       Values of a=20
       values of b=10

*/