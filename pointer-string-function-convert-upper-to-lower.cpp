//convert lower case into upper case and upper case into lower case of string by passing string into function using pointer.

#include<iostream>
void convert(char*);  
using namespace std;       //function declaration
int main()
{
    char str[20];
    cout<<"Enter a string : ";
    cin.getline(str,20);
    convert(str);        //function calling
    cout<<"Converted String:"<<str;
    return 0;
}
void convert(char *p)    //function defination
{
    while(*p!='\0')
    {
        if(*p>=65 && *p<=90)
        *p=*p+32;
        else
            if(*p>=97 && *p<=122)
                *p=*p-32;
        p++;
    }
} 
/*
o/p-    Enter a string : aachal
        Converted String : AACHAL

*/