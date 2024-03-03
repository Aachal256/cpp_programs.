// WAP FIND OUT MAXIMUM AND MINIMUM FROM ARRAY USING POINTERS.

#include<iostream>
using namespace std;
int main()
{
    int a[5],i,*p;
    int min=32767,max=-32768;
    cout<<"Enter 5 Elements:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    p=a;
    for(i=0;i<5;i++)
    {
        if(*p>max)
            max=*p;
        if(*p<min)
            min=*p;
        p++;
    }
    cout<<"maximum : "<<max<<endl;
    cout<<"minimum : "<<min;
    return 0;
    
}

/*
o/p-   Enter 5 Elements:1 2 3 4 5
       maximum : 5
       minimum : 1
*/