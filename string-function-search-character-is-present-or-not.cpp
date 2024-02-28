// search whether a particular character is presentin string or not by passing string into function.

#include<iostream>
using namespace std;
void search(char [],char);   //function declaration
int main()
{
    char str[10],ch;
    cout<<"Enter string:";
    cin.getline(str,10);
    cout<<"Enter the character you want to search: ";
    cin>>ch;
    search(str,ch);
    return 0;
}
void search(char str[],char ch) 
{
    int i,f=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    cout<<"character is present in string";
    else
    cout<<"character is not present in string";
}

/*
o/p-   Enter string:Aachal
      Enter the character you want to search: T
      character is not present in string

*/