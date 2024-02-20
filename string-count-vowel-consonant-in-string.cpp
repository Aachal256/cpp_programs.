// WAP TO COUNT VOWEL AND CONSONANT IN STRING.

#include<iostream>
using namespace std;
int main()
{
    char str[15];
    int i,c1=0,c2=0;
    cout<<"Enter a string :";
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            c1++;
        else
            c2++;
    }
    cout<<"Vowel:"<<c1<<endl;
    cout<<"Consonant:"<<c2;
    return 0;
}

/*
o/p--  Enter a string :programming
       Vowel:3
       Consonant:8

*/