/* WRITE A PROGRAM TO FIND THE SMALLEST NUMBER STORED IN AN ARRAY OF SIZE 10..
TAKE ARRAY VALUES FROM THE USER   */

#include<iostream>
using namespace std;
int main()
{
    int a[10],i,min;
    cout<<"Enter 10 numbers :";
    for(i=0;i<=9;i++)
    cin>>a[i];
    min=a[0];
    for(i=1;i<=9;i++)

    if(min>a[i])
    min=a[i];
    cout<<"Smallest number :"<<min;
    return 0;
}

/*
i/p--)   Enter 10 numbers :13 22 3 4 50 33 11 6 8 10
         Smallest number : 3
*/
