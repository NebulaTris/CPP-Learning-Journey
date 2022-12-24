/* Aim: Define a class Shape whose attributes are radius, length and width calculate the
perimeter of the rectangle and circle. Use constructors and destructors. */
//Program//

#include<iostream>
using namespace std;
class shape
{
        float p;
        public:
                shape(float radius)
                {
                        p=3.14*2*radius;
                }
                shape(float length, float width)
                {
                        p=2*length+2*width;
                }
                void display()
                {
                        cout<<"\n Perimeter : "<<p;
                }
};
int main()
{
        int ch;
        float r, l, b;
        do
        {
                cout<<"\n 1. Perimeter of Circle";
                cout<<"\n 2. Perimeter of Rectangle";
                cout<<"\n 3. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;
                switch(ch)
                {
                        case 1 :	
                        {
                                cout<<"\n Enter Radius of the Circle : ";
                                cin>>r;
                                shape s1(r); 
                                s1.display();
                        }
                        break;
                        case 2 :
                        {
                                cout<<"\n Enter Length and Width of the Rectangle : ";
                                cin>>l>>b;
                                shape s2(l,b);
                                s2.display();
                        }
                        break;
                        case 3 :
                                exit(0);

                        default :
                                cout<<"\n\n Invalid Choice ...";
                }
        } while(ch!=3);
        return 0;
}	
