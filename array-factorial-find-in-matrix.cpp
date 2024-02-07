// WAP TO PRINT FACTORIAL OF EACH NUMBER PRESENT IN MATRIX..

#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,f,n,k;
    cout<<"Enter Elements:";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        cin>>a[i][j];
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            n=a[i][j];
            f=1;
            for(k=1;k<=n;k++){   //calculating factorial
                f=f*k;
            }
            cout<<"factorial : "<<f<<endl;
        }
    }
    return 0;
}
/*
O/P--    
Enter Elements: 2 3 4
                2 3 4
                2 3 4
factorial : 2
factorial : 6
factorial : 24
factorial : 2
factorial : 6
factorial : 24
factorial : 2
factorial : 6
factorial : 24
*/