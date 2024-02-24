// count vowel and consonants available in a string by passing string into function.

#include<iostream>
using namespace std;
void count(char str[]);  //function declaration
int main()
{
    char str[20];
    cout<<"Enter string: ";
    gets(str);
    count(str);   //function calling
    return 0;
} 
void count(char str[])
{
    int i,c1=0,c2=0;
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
        {
            if(str[i]=='A' || str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                c1++;
            else
                c2++;
        }
    }
    cout<<"Vowel = " <<c1<<endl;
    cout<<"Consonant = "<<c2;
}
/*
o/p-    Enter string: Developer
        Vowel = 4
        Consonant = 5

*/