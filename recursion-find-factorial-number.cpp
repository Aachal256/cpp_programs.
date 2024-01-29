// WAP TO FINDS THE FACTORIAL OF A NUMBER USING RECURSION..

#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,r;
    cout<<"Enter a number:";
    cin>>n;
    r=fact(n);
    cout<<"The factorial of "<<n<<" is :"<<r;

}
int fact(int x)
{
    if(x==1)
    return 1;
    return x*fact(x-1);
}

/*
i/p--    Enter a number:6
         The factorial of 6 is :720

*/