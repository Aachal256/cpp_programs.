 /*
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    char k;
    cout<<"Enter a row: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k='A';
        for(j=1;j<=n;j++)
        cout<<k++;
    
    cout<<endl;
    }
    return 0;
    }

/*
i/p=) Enter a row: 7
o/p=)
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
*/
