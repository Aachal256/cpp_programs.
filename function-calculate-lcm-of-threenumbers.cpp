// Define a function to calculate LCM of three numbers..

#include<iostream>
using namespace std;
int lcm(int a,int b,int c);

int lcm(int a,int b,int c)
{

    int L;
    for(L=a>b?a>c?a:c:b>c?b:c; L<=a*b*c; L++)
        if(L%a==0&&L%b==0&&L%c==0)
            return L;
    return 0;
}
int main()
{
    cout<<"LCM = "<<lcm(4,6,10);
    return 0;
}

// o/p--   LCM = 60