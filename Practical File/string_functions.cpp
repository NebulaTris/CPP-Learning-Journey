/*Aim:Create two strings S1 and S2.Implement the following operations and write the output of each operation: 
Copy the content of S1 to S3
Find any substring in S2
Compare S1 and S2*/

//Program://
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cout << "Enter String 1: ";
    getline (cin, s1);
    cout << "Enter String 2: ";
    getline (cin, s2);
    s3 = s1;
    cout <<"\n\n****PART 1****";
    cout << "\nString 1 = "<< s1<<endl;
    cout << "String 3 = "<< s3 << endl;
    cout <<"\n****PART 2****";
    cout <<"\nPosition of Univ is :";  
    cout<< s2.find("Univ");  
    cout <<"\n\n****PART 3****";
    int a = s1.compare(s2);
	if (a == 0)
		cout << "\nBoth the input strings are equal." << endl;
	else if(a < 0)
		cout << "\nString 1 is smaller as compared to String 2.\n";
		else
		cout<<"\nString 1 is greater as compared to String 2.\n";
}

