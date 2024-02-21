// WAP TO CONCATENAT STRING.

#include<iostream>
using namespace std;
int main()
{
    char str1[20],str2[20];
    int c=0,i;
    cout<<"Enter first string: ";
    gets(str1);
    cout<<"Enter sec string: ";
    gets(str2);
    for(i=0;str1[i]!='\0';i++)
    c++;
    str1[c]=' ';
    c++;
    for(i=0;str2[i]!='\0';i++){
        str1[c]=str2[i];
        c++;
    }
    str1[c]='\0';
    cout<<"Result: "<<str1;
    return 0;
}
/*
o/p-   Enter first string: software
       Enter sec string: developer
       Result: software developer    

*/