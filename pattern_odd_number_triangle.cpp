 /*
ODD NUMBER TRIANGLE...
 1
 1 3
 1 3 5
 1 3 5 7
 1 3 5 7 9
 1 3 5 7 9 11
 1 3 5 7 9 11 13

*/


#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i-1;j=j+2)
        cout<<j;

    
    cout<<endl;
    }
    return 0;
}

/*
I/P=) Enter a number: 7
 1
 1 3
 1 3 5
 1 3 5 7
 1 3 5 7 9
 1 3 5 7 9 11
 1 3 5 7 9 11 13
*/

