//Define a class student and write a program to enter student details using constructor and define member function to display all the details.

#include<iostream>
using namespace std;
class Student{
    private:
        int rollno;
        char name[30];
    public:
        Student(){
            cout<<"Enter rollnumber: ";
            cin>>rollno;
            cout<<"Enter name: ";
            cin.ignore();
            cin.getline(name,30);
        }
        void display(){
            cout<<endl<<"rollnumber = "<<rollno<<endl<<"name = "<<name;
        }
};
int main()
{
    Student s1;
    s1.display();
    return 0;
}

/*
i/p--  Enter rollnumber: 1750
       Enter name: Aachal

o/p-   rollnumber = 1750
       name = Aachal
*/