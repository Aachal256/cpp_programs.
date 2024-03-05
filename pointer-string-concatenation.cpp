// string concatenation using pointers.

#include<iostream>
using namespace std;
int main()
{
    char s1[50],s2[50],*p1,*p2;
    cout<<"Enter first string : ";
    cin.getline(s1,50);
    cout<<"Enter second string : ";
    cin.getline(s2,50);
    p1=s1;
    while(*p1!='\0')
    {
        p1++;
    }
    p2=s2;
    while(*p2!='\0')
    {
        *p1=*p2;
        p1++;
        p2++;
    }
    *p1='\0';
    cout<<"Concatenated string : " <<s1;
    return 0;
}

/*
o/p-   Enter first string : software
      Enter second string : developer
      Concatenated string : software developer

*/