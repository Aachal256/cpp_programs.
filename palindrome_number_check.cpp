// CHECK PALINDROME NUMBER.

#include<iostream>
using namespace std;
int main()
{
    int n,r,temp,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n/=10;
    }
    if(temp==sum)
    cout<<"palindrome number";
    else
    cout<<"Not a palindrome number ";
    return 0;
}

/*
I/P---  Enter a number:131
        palindrome number
*/