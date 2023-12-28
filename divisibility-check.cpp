// write a program to check whether a given number is divisible by 5 or not..

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n%5==0)
    cout<<"divisible";
    else
    cout<<"not divisible";
    return 0;
}

/*
i/p--     Enter a number:25
         divisible

Enter a number:23
not divisible


*/