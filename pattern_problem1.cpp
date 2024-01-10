/*
  
Enter a row :6
111111
22222
3333
444
55
6

*/


#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter a row :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        cout<<i;
    
    cout<<endl;
    }
    return 0;
}

/*
i/p=)  
Enter a row :6
111111
22222
3333
444
55
6

*/