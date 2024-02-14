// WAP TO CALCULATE THE LENGTH OF THE STRING.(WITHOUT USING BUILTIN METHOD)


#include<iostream>
using namespace std;
int main()
{
    int l;
    char str[10];
    cout<<"Enter a string: ";
    fgets(str,10,stdin);
    for(l=0;str[l];l++);
    str[l-1]='\0';
    cout<<"Length is :"<<l-1;
    return 0;
}

/*
o/p-   Enter a string: Aachal
        Length is :6
*/