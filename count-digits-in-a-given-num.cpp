 // WAP to count digits in a given  number..

#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n)
   // for(i=1;i<=n;i++)
    {
        n=n/10;
        count++;
    }
    cout<<"count digit is "<<count;
    return 0;
}

/*
i/p=)   Enter a number:8756

o/p=)   count digit is 4
*/