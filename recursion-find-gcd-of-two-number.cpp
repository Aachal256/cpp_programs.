// WAP TO FIND THE GCD OF TWO NUMBERS USING RECURSION.

#include<iostream>
using namespace std;
int Gcd(int,int);
int main()
{
    int a,b,r;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    r=Gcd(a,b);
    cout<<"Gcd Of "<<a<<" and "<<b<<" is : "<<r;
}
int Gcd(int x,int y)
{
    if(x==0)
    return y;
    else if(y==0)
    return x;
    else
    return Gcd(y,x%y);
}

/*
i/p--   Enter two numbers:10 50
o/p-    Gcd Of 10 and 50 is : 10
*/