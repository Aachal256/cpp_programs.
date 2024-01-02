/* WRITE A PROGRAM TO FIND THE GREATEST NUMBER STORED IN AN ARRAY OF SIZE 10..
TAKE ARRAY VALUES FROM THE USER   */

#include<iostream>
using namespace std;
int main()
{
    int a[10],i,max;
    cout<<"Enter 10 numbers :";
    for(i=0;i<=9;i++)
    cin>>a[i];
    max=a[0];
    for(i=1;i<=9;i++)

    if(max<a[i])
    max=a[i];
    cout<<"Greatest number ="<<max;
    return 0;
}

/*
i/p--)  Enter 10 numbers:13 22 3 4 50 6 11 8 9 10
o/p--)  Greatest number = 50
*/
