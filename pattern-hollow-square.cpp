// Hollow Square Pattern

#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    cout<<"Enter a number :";
    cin>>k;
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        if(i >0 && i<k-1 && j>0 && j<k-1)
        cout<<"  ";
        else
        cout<<"* ";
        cout<<endl;
    }
        return 0;
}

/* 
Enter a number : 9

* * * * * * * * *
*               *
*               *
*               *
*               *
*               *
*               *
*               *
* * * * * * * * * 

*/