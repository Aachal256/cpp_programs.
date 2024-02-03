// WAP TO COUNT HOW MANY NUMBERS ARE POSITIVE, NEGATIVE OR ZERO FROM AN ARRAY.

#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,c1=0,c2=0,c3=0;
    cout<<"Enter numbers:";
    for(i=0;i<=4;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<=4;i++)
    {
        if(arr[i]>0)
        c1++;
        else{
            if(arr[i]<0)
            c2++;
            else
            c3++;
        }
    }
    cout<<"positive Elements :"<<c1<<endl<<"Negative Elements :"<<c2<<endl<<"Zero Elements :"<<c3;
    return 0;
}

/*
O/P--    Enter numbers:2 -3 0 -4 6
         positive Elements :2
         Negative Elements :2
         Zero Elements :1
*/