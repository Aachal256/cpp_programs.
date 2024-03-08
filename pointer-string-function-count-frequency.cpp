// count frequency of a character in string by passing string into function using pointer.

#include<iostream>
using namespace std;
int count(char*,char);    //function declaration
int main()
{
    char str[10],ch;
    int c;
    cout<<"Enter string: ";
    gets(str);
    cout<<"Enter the character which you want to count: ";
    cin>>ch;
    c=count(str,ch);     //function calling
    cout<<"Total Availability: "<<c;
    return 0;
}
int count (char*p,char ch)     //function defination
{
    int c=0;
    while(*p!='\0')
    {
        if(*p==ch){
            c++;
        }
    
    p++;
    }
    return c;
}
/*
o/p-   Enter string: Aachal
       Enter the character which you want to count: a
       Total Availability: 2

*/