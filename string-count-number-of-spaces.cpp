// COUNT NUMBER OF SPACES IN A STRING..


#include<iostream>
using namespace std;
int main()
{
    char str[50];
    int i,c=0;
    cout<<"Enter string :";
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ')
        c++;
    }
    cout<<"space:"<<c;
    return 0;
}

/*
I/O-     Enter string :count number of spaces
        space:3
*/