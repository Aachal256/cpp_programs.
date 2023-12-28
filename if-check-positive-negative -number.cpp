// write a program to check whether a given number is positive or non positive..
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>0)
    cout<<"positive number";
    if(n<0)
    cout<<"negative number";
    return 0;
}  

/*
i/p--  Enter a number:3
o/p--  positive number

Enter a number:-4
negative number

*/