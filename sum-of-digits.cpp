// only using operator write a program to input a three digit number and display the sum of the digits.
#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout<<"Enter a number:";
    cin>>n;
    s=n%10 + n/10%10 + n/10/10;
    cout<<"sum="<<s;
    return 0;
}

/*
i/p---   Enter a number:123
o/p--    sum=6
*/