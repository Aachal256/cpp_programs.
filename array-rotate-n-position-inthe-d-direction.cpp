/* define a function to rotate an array by n position in the d direction. 
 implement position in and direction using default arguments. arguments d can be -1 or 1
 denoting left or rigth direction.
 argument n should be the last argument with default value 1.
 */

#include<iostream>
using namespace std;
void rotate(int A[],int size,int d=1,int n=1);

void rotate(int A[],int size,int d,int n)
{
    int i,t,r;
    if(d==1)
    {
        for(r=1;r<=n;r++)
        {
            t=A[size-1];
            for(i=size-1;i>0;i--)
                A[i]=A[i-1];
            A[0]=t;
        }
    }
    if(d==-1)
    {
        for(r=1;r<=n;r++)
        {
            t=A[0];
            for(i=1;i<size;i++)
                A[i-1]=A[i];
            A[size-1]=t;
        }
    }
}
int main()
{
    int A[]={1,2,3,4,5};
    rotate(A,5);
    for(int i=0;i<=4;i++)
    cout<<A[i]<< " ";
    return 0;
}

// o/p-   5 1 2 3 4 