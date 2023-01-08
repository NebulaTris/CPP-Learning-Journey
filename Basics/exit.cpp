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
using namespace std;
int FindPower(int base, int power) {
   if (power == 0)
   return 1;
   else
   return (base * FindPower(base, power-1));
}
int main() {
   int base, power;
   cin>>base>>power;
   cout<<FindPower(base, power);
   return 0;
}
