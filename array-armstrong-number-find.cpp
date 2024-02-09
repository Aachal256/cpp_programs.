//  WAP TO PRINT THOSE NUMBERS WHICH ARE ARMSTRONG IN ARRAY..


#include<iostream>
using namespace std;
int main()
{
    int a[10],i,j,s,t,n;
    cout<<"Enter Elements: ";
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    for(i=0;i<10;i++){
        n=a[i];
        s=0;
        while(n>0){
            t=n%10;
            s=s+(t*t*t);
            n=n/10;
        }
        if(s==a[i]){
            cout<<a[i]<<" "<<"is "<<"Armstrong"<<endl;
        }
    }
    return 0;
}

/*
o/p--     Enter Elements: 118 150 153 199 223 370 456 543 675 765
          153 is Armstrong
          370 is Armstrong  

*/