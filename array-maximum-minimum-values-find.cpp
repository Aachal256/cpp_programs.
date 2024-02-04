//WAP TO FIND MAXIMUM AND MINIMUM ELEMENT OF ARRAY.


#include<iostream>
using namespace std;
int main()
{
    int max,min,i,arr[5];
    cout<<"Enter numbers:";
    for(i=0;i<=4;i++)
    {
        cin>>arr[i];
    }
    min=arr[0];
    max=arr[0];
    for(i=0;i<=4;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"maximum values of array :"<<max<<endl;
    cout<<"minimum values of array :"<<min;
    return 0;
}

/*
o/p--   Enter numbers:10 50 20 30 40
        maximum values of array :50
        minimum values of array :10

*/