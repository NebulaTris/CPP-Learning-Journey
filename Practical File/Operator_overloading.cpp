/*Aim: Write a program in which length is measured in feet and inches. User enters two values of lengths then a menu will be displayed for performing the following operations on it. Use operator overloading for all the functions:
1. Add two lengths: + operator
2. Compare the lengths using < operator
3. Compare the lengths using == operator
4. Use *= operator to multiply the length with given integer value*/

//Program://
#include <iostream>
using namespace std;
class Distance {
private:
    int feet, inches;

public:
    void readDistance(void)
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void ShowDistance(void)
    {
        cout << "Feet:" << feet << "\t"
             << "Inches:" << inches << endl;
    }
    
    Distance operator+(Distance& d1)
    {
        Distance D; 
        D.inches = inches + d1.inches;
        D.feet = feet + d1.feet + (D.inches / 12);
        D.inches = D.inches % 12;
        return D;
    }
    
    void operator <(Distance &d1)
     {
         if(feet<d1.feet)
          {
              cout<<"first distance is smaller";
          }      
              else if(feet==d1.feet && inches<d1.inches)
               {
                   cout<<"first distance is smaller";
               }
              else if(feet==d1.feet && inches==d1.inches) 
              {
                  cout<<"Equal distances";
              }
         else
              cout<<"second distance is smaller";
     }
    
    void operator==(Distance &d1)
     {
      if(feet == d1.feet && inches == d1.inches)
      {
       cout<<"True";
      }
      else
       cout<<"False";
     }
    
    Distance operator * (Distance &d1) 
    {
        Distance D;
        D.inches = inches*d1.inches;
        D.feet = feet*d1.feet + (D.inches/12);
        D.inches = D.inches % 12;
        return D;
    }
};

int main()
{
    Distance D1, D2, D3;
    int choice;

    cout << "Enter first  distance:" << endl;
    D1.readDistance();
    cout << endl;

    cout << "Enter second distance:" << endl;
    D2.readDistance();
    cout << endl;
    
       while (choice!=5)
        {
          cout<<"\t\nMENU";
          cout<<"\n1. + operator";
          cout<<"\n2. * operator";
          cout<<"\n3. == operator";
          cout<<"\n4. < operator";
          cout<<"\n5. Exit";
          cout<<"\n Your choice= ";
          cin>>choice ;
 switch ( choice)
  {
    case 1:
    D3 = D1 + D2;
    cout << "Total Distance:" << endl;
    D3.ShowDistance();
    cout << endl;
    break;
    
    case 2:
    D3 = D1*D2;
    cout<<"Total Distance:"<<endl;
    D3.ShowDistance();
    cout<<endl;
    break;
    
    case 3:
    D1==D2;
    cout<<endl;
    break;
    
    case 4:
    D1<D2;
    cout<<endl;
    break;
    
    case 5:
    exit(0);
    break;

    return 0;
  }
 }
}
