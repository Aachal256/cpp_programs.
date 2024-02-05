// WAP TO SWAP OF TWO 1 D ARRAY.

#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5],i;
    cout<<"Enter 5 numbers for first array:";
    for(i=0;i<=4;i++){
        cin>>a[i];
    }
    cout<<"Enter 5 numbers for secound array:";
    for(i=0;i<=4;i++){
        cin>>b[i];
    }
    for(i=0;i<=4;i++){
        a[i]=a[i]+b[i];
        b[i]=a[i]-b[i];
        a[i]=a[i]-b[i];
    }
    cout<<"first Array contains :";
    for(i=0;i<=4;i++){
        cout<<a[i];
    }
    cout<<endl<<"secound Array contains :";
    for(i=0;i<=4;i++){
        cout<<b[i];
    }
    return 0;
}

/*
O/P-  
Enter 5 numbers for first array:1 1 1 1 1 
Enter 5 numbers for secound array:2 2 2 2 2
first Array contains :22222
secound Array contains :11111
*/