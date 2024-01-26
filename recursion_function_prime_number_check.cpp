// USING RECURSION FUNCTION TO CHECK PRIME NUMBER.

#include<iostream>
using namespace std;
int prime(int,int);
int main()
{
    int n,check;
    cout<<"Enter a number:";
    cin>>n;
    check=prime(n,n/2);
    if(check==1)
    cout<<"prime number";
    else
    cout<<"Not prime number";
    return 0;
}
int prime(int n,int i)
{
    if(n==1)
    return 1;
    else if(n%2==0)
    return 0;
    else
    return (n,i=1);
}

/*
I/P---     Enter a number:11
           prime number
*/
