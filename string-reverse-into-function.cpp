// PRINT REVERSE OF STRING BY PASSING STRING INTO FUNCTION.

#include<iostream>
using namespace std;
void reverse(char []);  //function declaration
int main()
{
    char str[10];
    cout<<"Enter string: ";
    gets(str);
    reverse(str);    //function calling
    return 0;
}
void reverse(char str[])   //function definition
{
    int i,c=0;
    for(i=0;str[i]!='\0';i++)
        c++;
    cout<<"Reverse is: ";
    for(i=c-1;i>=0;i--)
        cout<<str[i];
}
/*
o/p-  Enter string : class
      Reverse is: ssalc
*/