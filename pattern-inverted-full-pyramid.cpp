/* inverted Full Pyramid Pattern

* * * * * * * * * * * * * * *
  * * * * * * * * * * * * *
    * * * * * * * * * * *
      * * * * * * * * *
        * * * * * * *
          * * * * *
            * * *
              *

*/
#include<iostream>
using namespace std;
int main()
{
    int rows=8;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<2*i;j++)
        cout<<" ";
        
        for(int k=0;k<2*(rows-i)-1;k++)
        cout<<"* ";
        
        cout<<endl;
         
    }
    return 0;
}