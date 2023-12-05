// write a c++ program to calculate an average of 3 numbers..

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float avg;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    avg=(a+b+c)/3.0;
    cout<<"average = "<<avg;
    return 0;
}

/*
i/p--  Enter three numbers:4 7 19
o/p--  average = 10
*/