// count frequency of a particular character in string by passing string into function.

#include<iostream>
using namespace std;
int count(char[],char);    //function declaration
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
int count (char str[],char ch)     //function defination
{
    int i,c=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
            c++;
    }
    return c;
}
/*
o/p-   Enter string: Aachal
       Enter the character which you want to count: a
       Total Availability: 2

*/