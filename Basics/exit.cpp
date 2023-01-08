/*A school has X gates and there are N students in the class. Find the number of ways all the students can exit the school only once.
Note: Try this with recursion

Input Format
First line contains two integers - X and N.

Constraints
1 <= X <= 10
1 <= N <= 31

Output Format
Print the total number of ways.*/

#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x,n;
    cin>>x>>n;
  cout << pow(x, n);

  return 0;
}
