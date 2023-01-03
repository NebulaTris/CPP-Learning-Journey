//Aim: To calculate roots of a quadratic equation using classes in C++.

//Program:
#include <iostream>
#include <cmath>
using namespace std;
class root{
    public:
    float a,b,c,d,x,y,rp,ip;
    void get(){
        cout<<"***Quadratic Equation Solver***\nEquation of form: ax^2+bx+c=0";
        cout << "\nEnter coefficient  of x^2 : ";
        cin >> a  ;
         cout << "Enter coefficient  of x : ";
        cin >> b ;
        cout << "Enter constant term: ";
        cin >> c ;
    }
    double dis(){
        d = b*b - 4*a*c;
        if (d > 0) {
        x = (-b + sqrt(d)) / (2*a);
        y = (-b - sqrt(d)) / (2*a);
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        }
        else {
            rp = -b/(2*a);
            ip =sqrt(-d)/(2*a);
            cout << "x = " << rp << "+" << ip << "i" << endl;
            cout << "y = " << rp << "-" << ip << "i" << endl;
    }
    return x,y,d;
    }
};
int main() {
    root r;
    r.get();
    r.dis();
    return 0;
}
