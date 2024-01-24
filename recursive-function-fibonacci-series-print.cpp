// WAP TO PRINT FIBONACCI SERIES USING RECURSION.

#include<iostream>
using namespace std;
int fibonacci(int);
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"The series are : ";
    for(int i=0;i<num;i++)
    cout<<fibonacci(i)<<" ";
    return 0;
}
int fibonacci (int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}

/*
I/P--     Entre a number:10
O/P-      The series are : 0 1 1 2 3 5 8 13 21 34   

*/