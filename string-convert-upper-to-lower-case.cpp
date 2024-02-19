// WAP TO CONVERT STRING UPPER CASE TO LOWER CASE OR LOWER TO UPPER CASE !


#include<iostream>
using namespace std;
int main()
{
    char str[50];
    int i;
    cout<<"Enter string :";
    gets(str);
    for(i=0;str[i]!='\0';i++){

        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
        else
            
            if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
        }
        cout<<"Result: "<<str;
        return 0;
}

/*

I/O-   Enter string :CONVERT STRING
       Result: convert string

*/