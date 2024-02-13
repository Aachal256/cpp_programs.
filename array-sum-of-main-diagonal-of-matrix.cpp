// Find out sum of main diagonal of a matrix by passing 2-D array into function .

#include<iostream>
using namespace std;
int sum(int a[3][3]);  //function declaration
int main()
{
    int a[3][3],i,j,s;
    cout<<"Enter Elements: ";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        cin>>a[i][j];
    }
    s=sum(a);   //function calling
    cout<<"sum : "<<s;
    return 0;
}
int sum(int a[3][3])   //function definition
{
    int i,s=0;
    for(i=0;i<3;i++){
        s=s+a[i][i];
    }
    return s;
}

/*

o/p-  Enter Elements: 2 3 5
                      1 4 3
                      3 2 5
sum : 11

*/