/*Aim: Create a class Person which includes: character array name of size 64, age in numeric, character array address of size 64, and total salary in real numbers (divide salary in different components, if required). Make an array of objects of class Person of size 10.
(a) Write inline function that obtains the youngest and eldest age of a person from a class person using arrays.
(b) Write a program to develop the salary slip and display result by using constructors.*/

//Program://
#include <iostream>
#include <limits>
using namespace std;
const int size=10;
class Person{
    private:
    char name[64];
    int age;
    char address[64];
    float salary;
    
    public:
    int getAge(){
        return age;
    }
void printsalary(){
    cout<<"Name is:"<<name<<endl;
    cout<<"Salary is:"<<salary<<endl;
    }
void takeInput(int index)
{
    cout<<"Enter details for person at position:"<<index+1<<endl;
    cout<<"Enter the name:";
    cin.getline(name,64);
    
    cout<<"Enter age:";
    cin>>age;
    cin.ignore();
    
    cout<<"Enter the salary:";
    cin>>salary;
    cin.ignore();
    
    cout<<"Enter the address:";
    cin.getline(address,64);
}
};
inline int older(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}
inline int younger(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}
void getYoungOld(Person array[])
{
    int youngest=numeric_limits<int>::max();;
    int oldest=0;
    for (int i=0;i<size;++i)
    {
        oldest=older(oldest,array[i].getAge());
        youngest=younger(youngest,array[i].getAge());
    }
    cout<<"Youngest="<<youngest<<endl;
    cout<<"Oldest="<<oldest<<endl;
}
int main()
{
    Person array[size];
    for(int i=0;i<size;++i)
    {
        array[i].takeInput(i);
    }
    getYoungOld(array);
    cout<<endl;
    
    while(1)
    {
        cout<<"Enter person's position to print their salary enter and enter a number greater than 10 to terminate:";
        int position;
        cin>>position;
        if(position<0 || position>10)
        {
            break;
        }
        array[position-1].printsalary();
        cout<<"Terminating"<<endl;
    }
}	
