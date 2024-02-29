// count number of spaces in string by passing string into function.

#include<iostream>
using namespace std;
int count(char []);   //function declaration
int main()
{
    char str[50];
    int c;
    cout<<"Enter string : ";
    cin.getline(str,50);
    c=count(str);      //function calling
    cout<<"Spaces: "<<c;
    return 0;
}
int count(char str[])     //function defination
{
    int i,c=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        c++;
    }
    return c;
}

/*
o/p-   Enter string : passing string into function
       Spaces: 3

*/