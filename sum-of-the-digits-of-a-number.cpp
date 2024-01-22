// SUM OF THE DIGITS OF A NUMBER...

#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n/=10;
    }
    cout<<"sum is "<<sum;
    return 0;
}

/*

Enter a number:235
sum is 10

*/