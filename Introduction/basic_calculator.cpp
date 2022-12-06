#include <iostream>
using namespace std;
int main() {
    int option,num1,num2;;
    cout<<"Enter two numbers for calculation\n";
    cout<<"Number 1:";
    cin>>num1;
    cout<<"Number 2:";
    cin>>num2;
    cout<<"Operation Menu\n";
    cout<<"1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n5)Modulo Division\nEnter your desired operation:";
    cin>>option;
    switch(option)  {
        case 1:
            cout <<num1<<" + "<<num2<< " = " << num1+num2;
            break;
        case 2:
            cout <<num1<<" - "<<num2<< " = " << num1-num2;
            break;
        case 3:
            cout <<num1<<" * "<<num2<< " = " << num1*num2;
            break;
        case 4:
            cout <<num1<<" / "<<num2<< " = " << num1/num2;
            break;
        case 5:
            cout <<num1<<" % "<<num2<< " = " << num1%num2;
            break;
        default:
            cout << "Error! Invalid Option";
            break;
    }
    return 0;
}
