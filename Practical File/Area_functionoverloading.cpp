/*Aim: Write a program to find the area (function name AREA) of circle, triangle and rectangle by Function overloading concept.*/

//Program://
#include<iostream>
using namespace std;
float area(float r)
{
return(3.14 * r * r);
}
float area(float bs,float h)
{
return(0.5 * bs * h);
}
int area(int l,int b)
{
return (l * b);
}
int main()
{
int l,b;
float bs,h,r;
int ch;
do
{
cout<<"\n Operation Menu \n";
cout<<"\n 1. Area of Circle";
cout<<"\n 2. Area of Triangle";
cout<<"\n 3. Area of Rectangle";
cout<<"\n 4. Exit";
cout<<"\n\n Enter Your Choice : ";
cin>>ch;
switch(ch)
{
case 1:
{
cout<<"Enter the Radius of Circle : ";
cin>>r;
cout<<"\nArea of Circle : "<<area(r);
break;
}
case 2:
{
cout<<"Enter the Base & Height of Triangle : ";
cin>>bs>>h;
cout<<"\nArea of Triangle : "<<area(bs,h);
break;
}
case 3:
{
cout<<"Enter the Length & Breadth of Rectangle : ";
cin>>l>>b;
cout<<"\nArea of Rectangle : "<<area(l,b);
break;
}
case 4:
exit(0);
default:
cout<<"\nInvalid Choice... ";
}
}while(ch!=4);
return 0;
}
