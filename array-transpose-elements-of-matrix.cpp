// WRITE A PROGRAM TO PRINT TRANSPOSE OF A MATRIX..
#include<iostream>
using namespace std;
int main()
{
    int mat[3][3],trans[3][3],i,j;
    cout<<"Enter Matrxi Elements: ";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        cin>>mat[i][j];
    }
}
    cout<<"Matrix Elements: ";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        cin>>mat[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        trans[j][i]=mat[i][j];
        }
    }
    cout<<"Transpose Elements:"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
        return 0;
}
/* O/P--   Enter Matrxi Elements: 1 2 3 4 5 6 7 8 9
Matrix Elements: 1 2 3
                 1 2 3
                 1 2 3
Transpose Elements: 1 1 1
                    2 2 2
                    3 3 3

*/