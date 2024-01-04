// write a c++ program to add all the numbers of an array of size 10..

#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"Enter 10 numbers:";
    for(i=0;i<=9;i++)
    cin>>a[i];
    for(i=0;i<=9;i++)
    sum=sum+a[i];
    cout<<"sum="<<sum;
    return 0;
}

/*
i/p--  Enter 10 numbers:1 2 3 4 5 6 7 8 9 10
o/p--  sum=55
*/