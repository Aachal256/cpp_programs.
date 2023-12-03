// write a c++ program to calculate the volume of a cuboid..

#include<iostream>
using namespace std;
int main()
{
    int l,h,w,v;
    cout<<"Enter length,heigth,width:";
    cin>>l>>h>>w;
    v=l*h*w;
    cout<<"volume of cuboid="<<v;
    return 0;
}

/*
i/p-    Enter length,heigth,width15 20 6
o/p-    volume of cuboid=1800
*/