// WAP TO PRINT REVERSE OF EACH NUMBER AVAILABLE IN ARRAY..

#include<iostream>
using namespace std;
int main()
{
    int a[10],i,j,n,t,s;
    cout<<"Enter Elements: ";
    for(i=0;i<10;i++)
        cin>>a[i];
        for(i=0;i<10;i++){
            n=a[i];
            s=0;
            while(n>0)
            {
                t=n%10;
                s=s*10+t;
                n=n/10;
            }
            cout<<"Reverse : "<<s<<endl;
        }
        return 0;
}
/*
i/p-    Enter Elements : 123 234 546 236 768 348 908 594 867 294
Reverse : 321
Reverse : 432
Reverse : 645
Reverse : 632
Reverse : 867
Reverse : 843
Reverse : 809
Reverse : 495
Reverse : 768
Reverse : 492

*/