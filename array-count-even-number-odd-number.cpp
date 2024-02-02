// WAP TO COUNT HOW MANY NUMBERS ARE EVEN OR ODD FROM AN ARRAY..

#include<iostream>
using namespace std;
int main()
{
    int a[5],i,c1=0,c2=0;
    cout<<"Enter 5 numbers :";
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=4;i++){
        if(a[i]%2==0){
            c1++;
        }
        else{
            c2++;
        }
    }
    cout<<"Even elements:"<<c1<<endl<<"Odd Elements:"<<c2;
    return 0;
}
/*
I/P--  Enter 5 numbers :9 12 13 8 10
       Even elements:3
       Odd Elements:2

*/