/*
NUMBER TRIANGLE 
I/P=)  Enter a row :8

 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
 1 2 3 4 5 6
 1 2 3 4 5 6 7
 1 2 3 4 5 6 7 8

*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter a row :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        cout<<j;
        
        cout<<endl;
    }
    return 0;
}
