/*Aim: a) Write a program to swap two numbers (create two classes) by using Friend function.
b) Write a program to create two classes DistM and DistF which store the values of distance. DistM stores distance in meters and centimetres and DistF stores distances in feet and inches. Read values for the class object and add one object of DistM with another object of DistF. 
Use a friend function for the addition operation and display answer in meter and centimetres.*/

//Program a://
#include <iostream>
using namespace std;
class Swap {
    int temp, a, b;
public:
    Swap(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    friend void swap(Swap&);
};
 void swap(Swap& s1)
{
    cout << "\nBefore Swapping: " << s1.a << " " << s1.b;
    s1.temp = s1.a;
    s1.a = s1.b;
    s1.b = s1.temp;
    cout << "\nAfter Swapping: " << s1.a << " " << s1.b;
}
 int main()
{
    Swap s(5, 9);
    swap(s);
    return 0;
}

//Program b://
#include<iostream>
using namespace std;
class DistF;
class DistM
{
               int m,cm;
   public:
               void get_data()
      {
cout<<"\nEnter value in metres : ";
              cin>>m;
cout<<"\nEnter value in cm: ";
               cin>>cm;
      }
      friend float sum(DistM a,DistF b);
};
class DistF
{
              int ft,in;
   public:
               void get_data()
      {
cout<<"\nEnter value in feet : ";
               cin>>ft;
cout<<"\nEnter value in inches : ";
               cin>>in;
      }
      friend float sum(DistM a,DistF b);
};
float sum(DistM a,DistF b)
{
               float x,y,z;
   x=(a.m+(b.ft/3.281));
   y=(a.cm+(b.in*2.54));
   return x;
  
}
int main()
{
   DistM a;
   DistF b;
               cout<<"\nEnter the value in meter and centimeter: ";
               a.get_data();
   cout<<"\nEnter the value in feet and inches: ";
               b.get_data();
               sum(a,b);
   cout<<"\nThe summed value in meter and centimeter is: "<<sum(a,b);
   return 0;
}
