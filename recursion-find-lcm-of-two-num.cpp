//WAP TO TO FIND THE LCM OF TWO NUMBERS USING RECURSION..

#include<iostream>
using namespace std;
int Lcm(int,int);
int main()
{
    int a,b,r;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    r=Lcm(a,b);
    cout<<"Lcm of "<<a<<" and "<<b<<" : "<<r;
}
int Lcm(int x,int y)
{
    static int k=0;
    k=k+y;
    if(k%x==0 && k%y==0)
    return k;
    return Lcm(x,y);
}

/*
I/P--   Enter two numbers:4 6
O/P--   Lcm of 4 and 6 : 12
*/