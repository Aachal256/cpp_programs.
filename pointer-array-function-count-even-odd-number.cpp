// count even and odd numbers present in array by passing array into function using pointer.

#include<iostream>
using namespace std;
void count(int *);   //function declaration
int main()
{
    int  a[10],i;
    cout<<"Enter 5 Elements:";
    for(i=0;i<5;i++)
    cin>>a[i];
    count(a);   //function calling
    return 0;
}
void count(int *p)   // function defination
{
    int i,c1=0,c2=0;
    for(i=0;i<5;i++)
    {
        if(*p%2==0)
            c1++;
        else
            c2++;
            p++;
    }
    cout<<"Even Elements:"<<c1<<endl;
    cout<<"Odd Elements:"<<c2;
}

/*
o/p-    Enter 5 Elements:1 2 4 5 9
        Even Elements:2
        Odd Elements:3

*/