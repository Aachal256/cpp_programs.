// program to print right half pyramid pattern of number.

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        if(j<=i)
        cout<<j;
        else
        cout<<" ";
        cout<<endl;
    }
    return 0;
}

/*
1      
12
123
1234
12345
123456
1234567
*/