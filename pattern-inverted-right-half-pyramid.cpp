/*
Inverted Right Half Pyramid pattern

 *  *  *  *  *  *  *  *  *  *  
 *  *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i;j++)
        {
        cout<<" * ";
        }
     cout<<endl;
    }
    return 0;
}