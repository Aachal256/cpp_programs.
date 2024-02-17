// WAP TO COUNT UPPER CASE,LOWER CASE,DIGITS &SPECIAL SYMBOLS..

#include<iostream>
using namespace std;
int main()
{
    char str[20];
    int i,c1=0,c2=0,c3=0,c4=0;
    cout<<"Enter a string :";
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            c1++;

        else
            if(str[i]>='a' && str[i]<='z')
                c2++;
            else
                if(str[i]>='0' && str[i]<='9')
                c3++;
                else
                c4++;
    }
    cout<<"Upper case: "<<c1<<endl;
    cout<<"Lower case: "<<c2<<endl;
    cout<<"digits: "<<c3<<endl;
    cout<<"Special symbol:"<<c4;
    return 0;
}
/*
o/p-
Enter a string :Aachal@12 
Upper case: 1
Lower case: 5
digits: 2
Special symbol:1

*/