/* Inverted left Half pyramid

* * * * * * * * * * 
  * * * * * * * * * 
    * * * * * * * * 
      * * * * * * * 
        * * * * * * 
          * * * * * 
            * * * * 
              * * * 
                * * 
                  * 
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=0;i<10;i++)
    {
        for(j=0;j<2*i;j++)
        cout<<" ";
        for(k=0;k<10-i;k++)
        cout<<"*"<<" ";
        cout<<endl;
    }
    return 0;

}