//sum of first natural numbers...

#include<iostream>
using namespace std;
int add(int);
int main()
{
    int n,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The sum o numbers from 1 to 5 : "<<add(n);
}
int add(int n)
{
    if(n==1)
    return 1;
    return n+add(n-1);
}

/*

i/p--  Enter a number:5
       The sum o numbers from 1 to 5 : 15
*/