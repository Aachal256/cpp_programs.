// count length of string by passing string into function.

#include<iostream>
using namespace std;

int length(char []);  //function declaration
int main()
{
    char str[10];
    int c,i;
    cout<<"Enter string: ";
    gets(str);
    c=length(str);  //function calling
    cout<<"Length="<<c;
    return 0;
}
int length(char str[])   //function definition
{
    int i,c=0;
    for(i=0;str[i]!='\0';i++)
    {
        c++;
    }
    return c;
}

/*
o/p-  Enter string: Aachal
      Length=6
*/