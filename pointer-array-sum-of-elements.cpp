// WAP TO PRINT SUM OF ARRAY USING POINTER.

#include<iostream>
using namespace std;
int main()
{
    int a[5],i,*p,s=0;
    int min=32767,max=-32768;
    cout<<"Enter 5 Elements:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    p=&a[0];
    for(i=0;i<5;i++)
    {
        s=s+(*p);
        p++;
    }
    cout<<"Sum : "<<s;
    return 0;

}

/*
o/p-  Enter 5 Elements : 1 2 3 4 5
      Sum : 15

*/