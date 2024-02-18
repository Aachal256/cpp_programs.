// WAP TO READ A STRING AND COPY ITS CONTENTS INTO ANOTHER .

#include<iostream>
using namespace std;
int main()
{
    char str[10],str1[10];
    int i;
    cout<<"Enter a string:";
    gets(str);
    for(i=0;str[i]!='\0';i++){
        str1[i]=str[i];
    }
    str1[i]='\0';
    cout<<"Copied string is : "<<str1;
    return 0;
}

/*
i/o--  Enter a string :Aachal
       Copied string is : Aachal

*/