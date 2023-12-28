//write a program to check whether the given number is even or odd using a bitwise operator.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n&1)
    cout<<"odd number";
    else
    cout<<"even number";
    return 0;
}

/*
Enter a number:6
even number


Enter a number:7
odd number

*/