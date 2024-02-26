// CONCATENATE TWO STRING BY PASSING STRINGS INTO FUNCTION.

#include<iostream>
using namespace std;
void concat(char [],char []);   //function declaration
int main()
{
    char s1[10],s2[10];
    cout<<"Enter first string :";
    gets(s1);
    cout<<"Enter second string :";
    gets(s2);
    concat(s1,s2);    //function calling
    cout<<"Concatenated string: "<<s1;
    return 0;
}
void concat(char s1[10],char s2[10])    //function defination
{
    int i,j,c=0;
    for(i=0;s1[i]!='\0';i++)
        c++;
    for(i=c,j=0;s2[j]!='\0';i++,j++)
    {
        s1[i]=s2[j];
    }
    s1[i]='\0';
}

/*
o/p-    Enter first string :software
        Enter second string :Developer
        Concatenated string: software Developer

*/