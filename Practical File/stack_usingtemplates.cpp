/*Aim: Write a program to implement stack functions using templates.*/

//Program://
#include<iostream>
#include<stdlib.h>
using namespace std;
template<class Type>
class Stack
{
Type s[10];
int top,n;
public:
Stack()
{
top=-1;
cout<<"\nEnter the Stack Size : ";
cin>>n;
}
void push(Type elt)
{
if(top<n-1)
s[++top]=elt;
else
cout<<"\nstack is full.Can't insert "<<elt<<endl;
}
void pop()
{
if(top<0)
cout<<"\nstack is empty.\n";
else
cout<<"\nPoped elt : "<<s[top--];
}
void stk_operation();
};
template<class Type>
void Stack<Type> :: stk_operation()
{
int choice=1,i;
Type elt;
while(choice>0 && choice<3)
{
cout<<"\n1.PUSH\n2.POP\n3.Any Key To Exit\nChoice : ";
cin>>choice;
switch(choice)
{
case 1 :
cout<<"\nEnter the Element to push : ";
cin>>elt;
push(elt);
cout<<"\nstack content :\n";
for(i=0;i<=top;i++)
cout<<s[i]<<"\t";
break;
case 2 :
pop();
cout<<"\nstack content :\n";
for(i=0;i<=top;i++)
cout<<s[i];
break;
}
}
}
int main()
{
cout<<"\nSTACK OPERATION USING TEMPLATE";
cout<<"\n INT";
Stack<int> stk1;
cout<<"\n FLOAT";
Stack<float> stk2;
int ch;
while(1)
{
cout<<"\nSTACK OPERATION \n";
cout<<"\n1.INT STACK\n2.FLOAT STK\n3.Any Key To Exit\nChoice : ";
cin>>ch;
switch(ch)
{
case 1 :
stk1.stk_operation();
break;
case 2 :
stk2.stk_operation();
break;
default : exit(0);
}
}
}
