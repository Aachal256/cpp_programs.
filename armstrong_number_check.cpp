// CHECK ARMSTRONG NUMBER ....

#include<iostream>
using namespace std;
int main()
{
    int n,r,temp,sum=0;
    cout<<"Entre a number:";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n/=10;
    }
    if(temp==sum)
    cout<<"Armstrong number";
    else
    cout<<"Not armstrong number";
    return 0;
}

/*
I/P--    Entre a number:370
         Armstrong number

*/