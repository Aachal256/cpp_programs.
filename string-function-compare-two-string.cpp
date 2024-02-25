// STRING COMPARISON BY PASSING STRINGS INTO FUNCTION.

#include<iostream>
using namespace std;
int compare(char [],char []);  //function declaration
int main()
{
    char s1[10],s2[10];
    int f;
    cout<<"Enter first string:";
    gets(s1);
    cout<<"Enter second string: ";
    gets(s2);
    f=compare(s1,s2);   //function calling
    if(f==0)
        cout<<"strings are equal";
    else
        cout<<"strings are not equal";
    return 0;
}
int compare(char s1[],char s2[])    //function defination
{
    int i,f=0;
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            f=1;
            break;
        }
    }
    return f;
}
/*
o/p-   Enter first string:software
       Enter second string: developer
       strings are not equal
*/