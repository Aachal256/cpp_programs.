// count length of string by passing string into function using pointer.

#include<iostream>
using namespace std;
int length(char*);  //function declaration
int main()
{
    char str[10];
    int l;
    cout<<"Enter string : ";
    cin.getline(str,10);
    l=length(str);
    cout<<"Length : "<<l;
    return 0;
}
int length(char *p)
{
    int l=0;
    while(*p!='\0')
    {
        l++;
        p++;
    }
    return l;
}

/*
o/p-  Enter string : Aachal
      Length : 6

*/