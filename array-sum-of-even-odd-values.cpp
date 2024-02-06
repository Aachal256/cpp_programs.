/*  wap to print sum o even and odd values available in array
by passing array into function */

#include<iostream>
using namespace std;
void EvenOdd(int []);
int main(){
        int arr[10],i;
        cout<<"Enter 10 Elements:";
        for(i=0;i<10;i++){
            cin>>arr[i];
        }
        EvenOdd(arr);
        return 0;
}
void EvenOdd(int arr[]){
        int s1=0,s2=0,i;
        for(i=0;i<10;i++){
            if(arr[i]%2==0){
                s1=s1+arr[i];
            }
            else{
                s2=s2+arr[i];
            }
        } 
    cout<<"Even Sum ="<<s1;
    cout<<endl<<"Odd Sum ="<<s2;
}

/*
o/p--    Enter 10 Elements:1 2 3 4 5 6 7 8 9 10
         Even Sum =30
         Odd Sum =25
*/