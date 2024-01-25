// WAP TO COUNT DIGITS USING RECURSION..

#include <iostream>
using namespace std;
int countNum(int n,int d){
    if(n<10)
        return d;
    else
        return countNum(n/10, d+1);
}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int x=countNum(n, 1);
    cout<<"Total digits :"<<x;
    return 0;
}

/*
I/P--   Enter number:12345
O/P--   Total digits :5

*/