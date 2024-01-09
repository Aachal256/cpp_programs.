/*    
Enter a row : 9

1
22
333
4444
55555
666666
7777777
88888888
999999999
*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter a row : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        cout<<i;
        cout<<endl;
    }
    return 0;
}
