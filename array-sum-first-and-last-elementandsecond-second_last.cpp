// WAP TO PRINT SUM OF FIRST AND LAST ELEMENT , SECOND AND SECOND LAST ELEMENT AND SO ON..

#include<iostream>
using namespace std;
int main()
{
    int  a[11],i,j;
    cout<<"Enter Elements:";
    for(i=0;i<11;i++)
        cin>>a[i];
    for(i=0,j=10;i<=j;i++,j--)
    {
        cout<<a[i]+a[j]<<" ";
    }
    return 0;
}

/*
O/P-    Enter Elements:1 2 3 4 5 6 5 4 3 2 1
        2 4 6 8 10 12

*/