// WAP to reverse a given number...
#include<iostream>
using namespace std;
int main()
{
    int n,r=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0)
    {
        r=r*10 + n%10;
        n/=10;
    }
    cout<<"Reverse number is: "<<r;
    return 0;

}



/*
i/p=)  Enter a number:836
o/p=)  Reverse number is: 638
*/