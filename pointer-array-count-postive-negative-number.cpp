// count positive,negative and zero elements of array using pointer.

#include<iostream>
using namespace std;
int main()
{
    int a[6],i,c1=0,c2=0,c3=0,*p;
    cout<<"Enter Elements : ";
    for(i=0;i<6;i++)
    {
        cin>>a[i];
    }
    p=a;
    for(i=0;i<6;i++)
    {
        if(*p>0)
        c1++;
        else
            if(*p<0)
            c2++;
            else
            c3++;
        p++;
    }
    cout<<"Positive numbers : "<<c1<<endl;
    cout<<"Negative number : "<<c2<<endl;
    cout<<"Zero : "<<c3;
    return 0;
}

/*
o/p-    Enter Elements : 5 -4 7 0 -8 9
        Positive numbers : 3
        Negative number : 2
        Zero : 1

*/