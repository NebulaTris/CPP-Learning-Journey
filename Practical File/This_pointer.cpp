/*Aim: Write a program to show the use of this pointer.*/

//Program://
#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    char name[100];
    float percent;
    public:
        void getdata()
        {
            cout<<"Enter data"<<endl;
            cout<<"Name:";
            cin>>name;
            cout<<"Percent:";
            cin>>percent;
            cout<<endl;
        }
        student & max(student &s1,student &s2)
        {
            if(percent>s1.percent && percent>s2.percent)
                return *this;
            else if(s1.percent>percent && s1.percent>s2.percent)
                return s1;
            else if(s2.percent>percent && s2.percent>s1.percent)
                return s2;
        }
        void display()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Percent:"<<percent;            
        }
 };

int main()
{
    student s,s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s=s3.max(s1,s2);
    cout<<"Student with highest percentage"<<endl;
    s.display();
    getch();
    return 0;
}
