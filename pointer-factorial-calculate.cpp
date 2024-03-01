// CALCULATE FACTORIAL USING POINTER.

#include<iostream>
using namespace std;
int main()
{
    int n,*p,f=1,i;
    cout<<"Enter a number : ";
    cin>>n;
    p=&f;
    for(i=1;i<=n;i++)
    {
        *p=(*p) * i;
    }
    cout<<"Factorial of "<<n<<" is : "<<f;
    return 0;
}

/*
O/P-   Enter a number : 5
       Factorial of 5 is : 120  

*/