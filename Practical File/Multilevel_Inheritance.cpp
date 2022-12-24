/*Aim: Design three classes: Student, Exam and Result. The student class has data members such as roll no, name etc. Create a class Exam by inheriting the Student class. The Exam class adds data members representing the marks scored in six subjects. Derive the Result from class Exam and it has its own members such as total marks. Write an interactive program to model this relationship.*/

//Program://
#include <iostream>
using namespace std;
const int size=3;
class student
{   char name[20];
    int rollno;
    public:
    void getinfo(){
        cout<<"Enter Name of Student:";
        cin.getline(name,20);
        cout<<"Enter Roll No. of Student:";
        cin>>rollno;
    }
};
class exam: public student
{   public:
    int i,sum=0,marks[6];
    float avg;
    void putmarks(){
    for(i=0;i<6;i++)
    {
        cout<<"\n Enter the marks of student in subject "<<i+1<<":";
        cin>>marks[i];
        sum+=marks[i];
        avg=sum/6;
    }
    }
};
class result:public exam
{   public:
    void display(){
        cout<<"\nTotal Marks:"<<sum<<"/600";
        cout<<"\nResult:"<<avg<<"%";
    }
};
int main()
{   result obj;
    obj.getinfo();
    obj.putmarks();
    obj.display();
    return 0;
}
