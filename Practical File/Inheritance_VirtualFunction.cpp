/*Aim:Consider an example of book shop which sells books and video tapes. These two classes are inherited from base class called media. The media class has command data members such as title and publication. The book class has data members for storing number of pages in a book and tape class has playing time in a tape. Each class will have member functions such as read () and show (). In the base class, these members have to be defined as virtual functions. Write a program to models the class hierarchy for book shop and processes objects of these classes using pointers to base class. Write the rules of virtual functions.*/

//Program://
#include <iostream>
using namespace std;
class media
{
    public:
    char title[64], publication[64];
    virtual void read()
    {
        cout <<"Enter title:";
        cin.getline(title,64);
        cout <<"Enter name of publication:";
        cin.getline(publication,64);
    }
    virtual void show()
    {
        cout<<"Name:"<<title<<"\n";
        cout<<"Name of publication:"<<publication<<"\n";
    }
};
class books:public media
{
    int pages;
    void read()
    {   
        cout <<"\nEnter title:";
        cin.getline(title,64);
        cout <<"\nEnter name of publication:";
        cin.getline(publication,64);
        cout <<"\nEnter number of pages:";
        cin>>pages;
    }
    virtual void show()
    {
        cout<<"============================";
        cout<<"\nName of the book:"<<title<<"\n";
        cout<<"Name of publication:"<<publication<<"\n";
        cout<<"Pages in book:"<<pages<<"\n";
        cout<<"============================";
    }
};
class video:public media
{
    float tme;
    void read()
    {
        cout <<"Enter name of video title:";
        cin.getline(title,64);
        cout <<"Enter name of publisher:";
        cin.getline(publication,64);
        cout <<"Enter running time in mins:";
        cin>>tme;
    }
    virtual void show()
    {
        cout<<"============================";
        cout<<"\nName of video:"<<title<<"\n";
        cout<<"Name of publisher:"<<publication<<"\n";
        cout<<"Running time in mins:"<<tme<<"\n";
        cout<<"============================";
    }
};
int main()
{
    media*p1;
    video v1;
    books b1;
    p1=&b1;
    p1->read();
    p1->show();
    p1=&v1;
    p1->read();
    p1->show();
    return 0;
}
