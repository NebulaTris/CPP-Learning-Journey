/*
Input 
3
Output
3 10 5 16 8 4 2 1
Aim:
1)If n is even, then n = n / 2.
2)If n is odd, then n = 3*n + 1.
3)Repeat above steps, until it becomes 1.
*/

//Program
#include <iostream>
using namespace std;
void num(int n)
{
    while (n != 1)
    {
        cout << n << " ";
        if (n & 1)
            n = 3*n + 1;
        else
            n = n/2;
    }
    cout << n;
}

int main()
{
    int n;
    cin>>n;
    num(n);
    return 0;
}
