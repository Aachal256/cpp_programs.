// WRITE A PROGRAM TO SUM TWO MATRICES ..
#include<iostream>
using namespace std;
int main()
{
    int A[3] [3],B[3] [3],P[3] [3],i,j;
    cout<<"Enter 9 numbers of first matrix: ";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        cin>>A[i][j];
    }
    cout<<"Enter 9 numbers of second matrix: ";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        cin>>B[i][j];
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        P[i][j]=A[i][j]+B[i][j];
    }
    cout<<" sum of matrix : ";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            cout<<P[i][j]<<"  ";
        cout<<endl;
    }
        return 0;
}
/*
O/P--  Enter 9 numbers of first matrix:  2 2 2 2 2 2 2 2 2
       Enter 9 numbers of second matrix: 3 3 3 3 3 3 3 3 3
       sum of matrix : 5  5  5  
                       5  5  5  
                       5  5  5  
 
*/