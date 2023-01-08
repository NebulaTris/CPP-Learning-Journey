/*Nobita's mom went for New Year Shopping. She bought N New Year presents' in total. Nobita is asked to randomly take M presents for himself.
Find the total number of different possibilities of picking up the presents by Nobita and print it.

Input Format
Take input for values of N and M in a single line.

Constraints
1 ≤ N,M ≤ 10

Output Forma
Print the number of possibilities*/

#include <bits/stdc++.h>
using namespace std;
int fact(int n); 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int fact(int n)
{
    if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout << nCr(n, r);
    return 0;
}
