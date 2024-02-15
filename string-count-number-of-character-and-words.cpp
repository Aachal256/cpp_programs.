// COUNT NUMBER OF CHARACTERS AND WORDS IN A STRING ..


#include<iostream>
using namespace std;
int main()
{
    char str[20];
    int i,c=0,sp=0;
    cout<<"Enter a string :";
    gets(str);
    for(i=0;str[i]!='\0';i++){
        c++;
        if(str[i]==' '){
            sp++;
        }
    }
        cout<<"character: "<<c<<endl;
        cout<<"words: "<<sp+1;
    return 0;
}

/*
i/p--    Enter a string :Developing country

        character: 18
        words: 2

*/